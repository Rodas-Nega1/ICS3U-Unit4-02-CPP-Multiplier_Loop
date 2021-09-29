// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks for a number, then checks if it is
// greater than 1 by continuously adding one to the 1

#include <iostream>


int main() {
    // this function loops until it is less than the user integer
    // and creates an multiplication sequence

    std::string userNumber;
    int userNumberInt;
    int digitOne = 0;
    int product = 1;

    // input
    std::cout << "Enter in a positive integer: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output

    try {
        userNumberInt = std::stoi(userNumber);
        do {
            product = product * userNumberInt;
            userNumberInt = userNumberInt - 1;
        } while (digitOne < userNumberInt); {
        }
        std::cout << "The product of all positive integers from 1 to "
        << userNumber << " is " << product << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid integer.";
    }

    std::cout << "\nDone." << std::endl;
}
