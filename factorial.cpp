// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// this program loops a number to add


#include <iostream>
#include <string>


int main() {
    // variables
    int numinput;
    int loopc = 0;
    int answer = 1;
    std::string numcheck;

    // input
    std::cout << "enter factorial: ";
    std::cin >> numcheck;
    std::cout << "" << std::endl;

    // process and output
    try {
        numinput = std::stoi(numcheck);
        if (numinput > 0) {
            while (loopc < numinput) {
                ++loopc;
                answer *= loopc;
            }
            std::cout << answer;
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
}
}
