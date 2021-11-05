#include <csstext/TestSuite.h>
#include <iostream>

class suite : public CxxTest::TestSuite, public CxxTest::IOTestSuite{
  public:
    void testSanityCheck(){
      TS_ASSERT( 1 > 0 );

      std::cout<<"My output\n";

      TS_ASSERT( getOutput() == "My output\n" );
    }
};
