//
// Created by Jason on 2/15/2019.
//

#include "catch.hpp"
#include "stringCal.h"


TEST_CASE("null string test") {
    REQUIRE(stringCal("") == 0);

}
TEST_CASE("single number return")
{
    REQUIRE(stringCal("1") == 1);
}