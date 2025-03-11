// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 10, 2025
// This program calculates the area and
// circumference of a circle using PI

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // declare variables
    float radius, circumference, area;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;

    // display the circumference to the user
    std::cout << "Circumference = " << std::fixed << std::setprecision(2)
    << circumference << "mm" << std::endl;
    std::cout << "Area = " << std::fixed << std::setprecision(2)
              << area << "mm" << std::endl;
}
