// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : October 1st, 2025
// This program displays and calculates the circumference and area of a circle

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // constants
    const float TAU = 6.28318530718;
    const float PI = 3.14159265359;

    // variables
    float radius;
    float circumference;
    float area;

    // gets radius from the user
    std::cout << "Enter Radius of the circle (cm): ";
    std::cin >> radius;

    // calculates the circumference and area of a circle
    area = PI * pow(radius, 2);
    circumference = radius * TAU;

    // displays circumference and area of a circle
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << "\n The area of the circle is: " << area << "cm²";

    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << "\n The circumference of the circle is: "
    << circumference << "cm" << std::endl;
}
