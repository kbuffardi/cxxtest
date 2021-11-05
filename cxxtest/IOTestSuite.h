/*
-------------------------------------------------------------------------
 CxxTest: A lightweight C++ unit testing library.
 Copyright (c) 2008 Sandia Corporation.
 This software is distributed under the LGPL License v3
 For more information, see the COPYING file in the top CxxTest directory.
 Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
 the U.S. Government retains certain rights in this software.
-------------------------------------------------------------------------
*/

#ifndef __cxxtest__IOTestSuite_h__
#define __cxxtest__IOTestSuite_h__

//
// class TestSuite is the base class for all test suites.
// To define a test suite, derive from this class and add
// member functions called void test*();
//

#include <cxxtest/TestSuite.h>
#include <sstream>
#include <string>

namespace CxxTest
{
  class IOTestSuite :: public TestSuite
  {
  private:
    std::stringstream io_buffer;
    std::streambuf * io_capture;
  public:
      IOTestSuite();
      ~IOTestSuite();
      std::string getOutput();
  };
}
