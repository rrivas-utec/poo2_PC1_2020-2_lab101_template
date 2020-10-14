//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "filter.h"
#include <string>
#include <vector>
#include <list>
#include <forward_list>

TEST_CASE("Pregunta 2") {
    std::string result;
    std::vector vec = {1, 3, 4, 5, 6, 7};
    auto r1 = filter(vec, 5, 2, 4);
    for (const auto& item: r1){
        result += std::to_string(item) + " ";
    }
    REQUIRE(result == "7 4 6 ");

    result.clear();
    std::list lst = {1, 3, 4, 5, 6, 7};
    auto r2 = filter(lst, 3, 2, 1);
    for (const auto& item: r2){
        result += std::to_string(item) + " ";
    }
    REQUIRE(result == "5 4 3 ");

    result.clear();
    std::forward_list fwd_lst = {1, 3, 4, 5};
    auto r3 = filter(fwd_lst, 2, 0);
    for (const auto& item: r3){
        result += std::to_string(item) + " ";
    }
    REQUIRE(result == "4 1 ");
}