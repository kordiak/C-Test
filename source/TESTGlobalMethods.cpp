//
//  TESTGlobalMethods.cpp
//  TryingOnCatchAndFakeIt
//
//  Created by Szymon Kordiaczyński on 03.11.2017.
//
//
#define CATCH_CONFIG_MAIN



#include "headers/catch.hpp"
#include "headers/GlobalFunctions.h"


TEST_CASE("Factorials are computed","[factorial]")
{
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}


