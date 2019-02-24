//
// Created by Jason on 2/15/2019.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "stringCal.h"


TEST_CASE("null string test") {
    REQUIRE(stringCal("") == 0);

}
TEST_CASE("single number return")
{
    REQUIRE(stringCal("1") == 1);
}

//3)Two numbers, comma delimited, returns the sum
TEST_CASE("Two numbers, comma delimited, returns the sum")
{

    REQUIRE(stringCal("0,0") == 0);
    REQUIRE(stringCal("1,1") == 2);
    REQUIRE(stringCal("5,6") == 11);
    REQUIRE(stringCal("aaaaa5,6") == 11);
    REQUIRE(stringCal("5,6fffff") == 11);
    REQUIRE(stringCal("rr5,6ffs") == 11);

}
