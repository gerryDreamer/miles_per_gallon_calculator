#!/bin/bash
g++ main.cpp miles.cpp miles.h -lpthread -o miles -std=c++11
if test -f miles; then
./miles
fi
