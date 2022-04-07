// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: April 2022
// This program lets the user see if it is a leap year


#include <iostream>
#include <string>


int main() {
    // this function lets the user see if it is a leap year
    std::string yearNumberAsString;
    int yearNumberAsInt;

    // input
    std::cout << "Enter an year: ";
    std::cin >> yearNumberAsString;

    // process
    try {
        yearNumberAsInt = std::stoi(yearNumberAsString);
        if (yearNumberAsInt % 4 == 0) {
            if (yearNumberAsInt % 400 == 0) {
                std::cout << "It is not a leap year";
            } else {
                std::cout << "It is a leap year";
            }
        } else {
            std::cout << "It is not a leap year";
        }
    } catch (std::invalid_argument) {
            std::cout << "That is not a year";
    }
    std::cout << "\nDone." << std::endl;
}
