// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 24th, 2023
// This program asks the user to guess a number between 0 and 9
// and tells the user if they got it correct, with random numbers,
// with try, catch
#include <iostream>
#include <random>

int main() {
    // Declare variables
    int userGuessAsInt;
    std::string userGuessAsString;

    // Providing a seed value. Source: (https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus)
    srand((unsigned)time(NULL));

    // Get a random number between 0 and 9
    int randomNumber = rand() % 10;

    // Get the user's guess
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userGuessAsString;

    try {
        // convert the user's guess to an int
        userGuessAsInt = std::stoi(userGuessAsString);

        // Check if user's guess is correct
        if (userGuessAsInt == randomNumber) {
            std::cout << "You have guessed the correct number " << std::endl;
        } else {
            std::cout << "You are incorrect.The number was ";
            std::cout << randomNumber << "." << std::endl;
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << userGuessAsString << " is not an integer.\n";
    }
}
