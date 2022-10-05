#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Is Divisible"){
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
}
TEST_CASE("Is Prime"){
    CHECK(isPrime(5) == true);
    CHECK(isPrime(11) == true);
    CHECK(isPrime(17) == true);
    CHECK(isPrime(39) == false);
}

TEST_CASE("Next Prime"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("Count Primes in Range"){
    CHECK(countPrimes(2, 5) == 3);
    CHECK(countPrimes(10, 31) == 7);
    CHECK(countPrimes(2, 47) == 15);
}

TEST_CASE("Twin Prime"){
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(15) == false);
}

TEST_CASE("Next Twin Prime"){
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(19) == 29);
}

TEST_CASE("Largest Twin Prime"){
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}

