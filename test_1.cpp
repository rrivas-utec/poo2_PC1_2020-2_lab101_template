//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"
#include "roll.h"
#include <string>

TEST_CASE("Pregunta 1") {
    std::string result;
    utec::linked_list<int> list1 = {1, 2, 3, 4, 5, 6};
    auto list2 = roll(list1, 2);
    auto item = list2.first();
    while (item != nullptr){
        result += std::to_string(item->value()) + " ";
        item = item->next();
    }
    REQUIRE(result == "5 6 1 2 3 4 ");
    // Second test
    utec::linked_list<int> list3 = {1, 2, 3, 4};
    auto list4 = roll(list3, 5);
    result.clear();
    item = list4.first();
    while (item != nullptr){
        result += std::to_string(item->value()) + " ";
        item = item->next();
    }
    REQUIRE(result == "4 1 2 3 ");
}
