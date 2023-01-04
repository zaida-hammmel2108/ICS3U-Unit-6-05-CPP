// Copyright Zaida Hammel 2022
//
// Created by Zaida Hammel
// Created in Dec 2022
// This program calculates the average grade

#include <cmath>
#include <iostream>
#include <list>
#include <string>

float averageMark(std::list<float> grades) {
    // This function finds the average grade

    float average;
    int grade;
    float total = 0;

    for (int grade : grades) {
        total += grade;
    }
    average = round(total / grades.size() * 100) / 100;

    return average;
}

int main() {
    // This function makes the list

    float average;
    float tempInt;
    std::list<float> grades;
    std::string tempNumber = "";
    std::list<std::string> reversedWords;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (tempNumber != "-1") {
        try {
            std::cout << "What is your mark (1 - 100): ";
            std::cin >> tempNumber;
            tempInt = stof(tempNumber);
            if (tempInt <= 100 & tempInt >= 0) {
                grades.push_back(tempInt);
            } else if (tempInt == -1) {
                average = averageMark(grades);
                std::cout << "\nThe average is " << average << "%" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid input." << std::endl;
            continue;
        }
    }
    std::cout << "\nDone." << std::endl;
}
