#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if (count <= 0) {
        return {};
    }
    
    std::vector<int> vec(count);
    for (size_t i = 0; i < count; ++i) {
        vec[i] = step * (i + 1);
    }

    return vec;
}