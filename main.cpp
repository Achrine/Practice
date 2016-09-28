//
//  main.cpp
//  Practice
//
//  Created by Steven Brcak on 9/11/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//

#include <iostream>
#include "functions.h"
using namespace functions;

int main() {
    std::cout << "Hello, World!\n";
    std::cout << addition(2,2) << std::endl;
    std::cout << subtraction(9, 5) << std::endl;
    std::cout << multiple(2,2) << std::endl;
    std::cout << square(2) << std::endl;
    return 0;
}

