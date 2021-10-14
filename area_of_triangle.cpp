// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021

#include <iostream>

void TiangleArea(int base_integer, int height_integer) {
    // this function calculates the area of a triangle
    int area;

    area = base_integer * height_integer / 2;
    std::cout << "The area of the triangle is " << area << " cm²"<< std::endl;
}

int main() {
    int base_integer;
    std::string base;
    int height_integer;
    std::string height;

    // input
    std::cout << "Enter base of the triangle (cm): ";
    std::cin >> base;
    std::cout << "Enter height of the triangle (cm): ";
    std::cin >> height;
    std::cout << "" << std::endl;

    // try and catch
    try {
        base_integer = std::stoi(base);
        height_integer = std::stoi(height);

        // call functions
        TiangleArea(base_integer, height_integer);
        std::cout << "\nDone." << std::endl;
    }

    catch (std::invalid_argument) {
        std::cout << base << " and " << height
                    << " are invalid inputs, please try again." << std::endl;
        std::cout << "\nDone." << std::endl;
    }
}
