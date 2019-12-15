//
// Created by llk89 on 2019/12/15.
// Copyright (c) 2019 llk89.
// Licensed to general public by MIT license.
//

#ifndef RECITATION12_HIGHER_HPP
#define RECITATION12_HIGHER_HPP
#include <functional>
#include <string>

template <typename InputIterator, typename Predicate>
InputIterator my_find(InputIterator begin, InputIterator end, Predicate predicate) {
    // TODO fill in the blank
}

class Logger {
public:
    typedef int logging_handler_type; // TODO replace int with something correct here
    typedef std::function<std::string()> log_message_type;
    void addHandler(logging_handler_type handler);
    void log(log_message_type message);
    void log(const std::string &message);

private:
    // some fields here?
};

#endif //RECITATION12_HIGHER_HPP
