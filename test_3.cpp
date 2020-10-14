//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "calculate.h"
#include <vector>
#include <map>
#include <numeric>

TEST_CASE("Pregunta 3") {
    std::vector<int> v1 = {1, 2, 3, 10, 20, 15};
    std::map<char,int> m1 = {{'A',1}, {'B',1}, {'C',1}, {'D',1}, {'E',1}};

    auto result = calculate(v1, m1, [](int a, int b){return a + b;});

    REQUIRE(result.size() == 6);
    auto total = std::accumulate(begin(result), end(result), 0);
    REQUIRE(total == 56);

    std::map<int,int> m2 = {{0,1}, {1,1}, {2,1}};
    std::list<int> l2 = {2, 2, 2, 3, 3, 3, 3};

    result = calculate(l2, m2, [](int a, int b){return a + b;});

    REQUIRE(result.size() == 7);
    total = std::accumulate(begin(result), end(result), 0);
    REQUIRE(total == 21);

}