//
// Created by llk89 on 2019/12/15.
// Copyright (c) 2019 llk89.
// Licensed to general public by MIT license.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <functional>
#include <vector>
#include <algorithm>
#include "higher.hpp"
using std::vector;

int main(int argc, char**argv) {
    Logger logger;
    // TODO change 0 to make it log "Logger called" to console
    logger.addHandler(0);
    // TODO change 1 to make it log to file "log.txt" if message is no shorter than 16 characters.
    logger.addHandler(1);
    // TODO change 2 to make it log to console if message is shorter than 16 character.
    logger.addHandler(2);
    vector<int> v {-3,1,2,0};
    auto result = my_find(v.begin(), v.end(), [](auto i) { return i > 2; });
    // TODO change empty message to a lambda that will output a string containing "The result is <result>"
    // or "not found", depending on whether there was a hit
    // Naturally this means capturing result
    // You should think whether this should be by reference or by value
    logger.log("");
    // next lines should negate the values in v and store the values in negated
    vector<int> negated;
    std::transform(/* TODO Fill in the blank */);
    // next lines should copy nonzero values in v to nonzero
    vector<int> nonzero;
    std::copy_if(/* TODO Fill in the blank */);
    // next lines should calculate the sum of all elements in v
    int sum_1 = std::accumulate(/* TODO Fill in the blank */);
    // next lines should calculate the square sum of all elements in v
    // there are two ways possible
    int square_sum = std::accumulate(/* TODO Fill in the blank */);
    // sort the v in descending order
    std::sort(/* TODO Fill in the blank */);
    return 0;
}
