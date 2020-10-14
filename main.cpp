#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_FAST_COMPILE
#include "catch.hpp"
#include <type_traits>
#include <random>

/*
template <typename T>
auto random(T first, T last) {
    std::random_device device;
    std::default_random_engine engine(device);
     if constexpr (std::is_integral<T>::value) {
         std::uniform_int_distribution<T> distribution(first, last);
         return distribution(engine);
     }
     else {
         std::uniform_real_distribution<T> distribution(first, last);
         return distribution(engine);
     }
}

int f1(int x) {
    if (x <= 0) return 0;
    else {
        auto i = random(0, x - 1);
        return f1(i) + f1(x - 1 - i);
    }
}
*/


