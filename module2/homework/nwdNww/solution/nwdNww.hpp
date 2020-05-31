#pragma once
#include <algorithm>

// Euklides algorithm
int NWD(int lhs, int rhs) {
    if (lhs < rhs) {
        std::swap(lhs, rhs);
    }
    if (rhs == 0) {
        return lhs;
    }

    int result{0};
    while ((result = lhs % rhs)) {
        lhs = rhs;
        rhs = result;
    }

    return std::abs(rhs);
}

int NWW(int lhs, int rhs) {
    auto nwd = NWD(lhs, rhs);
    if (nwd == 0) {
        return 0;
    }
    return std::abs((lhs * rhs) / NWD(lhs, rhs));
}
