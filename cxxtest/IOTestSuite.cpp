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

#ifndef __cxxtest__IOTestSuite_cpp__
#define __cxxtest__IOTestSuite_cpp__

#include <cxxtest/TestSuite.h>
#include <sstream>

namespace CxxTest
{
  IOTestSuite::IOTestSuite(){
    io_capture = std::cout.rdbuf(io_buffer.rdbuf());
  }
  IOTestSuite::~IOTestSuite(){
    delete io_capture;
  }
  std::string IOTestSuite::getOutput(){
    return io_buffer.str();
  }
}
