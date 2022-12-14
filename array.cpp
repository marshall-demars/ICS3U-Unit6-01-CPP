// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program finds the average of 10 random numbers using arrays

#include <iostream>
#include <random>

int main() {
    int randomNumbers[10];
    int singleRandomNumber;
    float average = 0;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        singleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = singleRandomNumber;
        average = average + singleRandomNumber;
        std::cout << "The random number is: "
                  << randomNumbers[loop_counter] << "" << std::endl;
    }
    // adds all the numbers in the array
    average = average / (sizeof(randomNumbers) / sizeof(randomNumbers[0]));
    std::cout << "\nThe average is " << average << "" << std::endl;

    std::cout << "\n.Done" << std::endl;
}
