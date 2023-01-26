#include "functions_to_implement.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <vector>
using namespace std;



    TEST_CASE( "Signs are computed", "[sign]") {
        REQUIRE (Sign(0) == 1);
        REQUIRE (Sign(-1) == -1);
        REQUIRE (Sign(1) == 1);
        REQUIRE (Sign(-4) == -1);
        REQUIRE (Sign(2.0) == 1.0);
        REQUIRE (Sign(-5.0) == -1.0);
    }

  



    TEST_CASE( "Adding is computed", "[sign]") {
        vector<int> vInt{1,2,3,4,5};
        vector<double> vDouble{1.0,2.0,3.0,4.0,5.0};
        vector<string> vString{"one","two","three","four","five"};
        //REQUIRE (AddN(vInt, 1) == {2,3,4,5,6});
        REQUIRE (AddN(vInt, 1)[0] == 2);
        REQUIRE (AddN(vInt, -1)[0] == 0);
        REQUIRE (AddN(vDouble, 1.0)[0] == 2.0);
        REQUIRE (AddN(vDouble, -2.0)[0] == -1.0);
        REQUIRE (AddN(vString, "test")[0] == "onetest");
        REQUIRE (AddN(vString, " o'clock")[0] == "one o'clock");
    }