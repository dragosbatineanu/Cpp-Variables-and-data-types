// Cpp Variables and data types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your age:" << std::endl;
    int age;
    std::cin >> age;

    std::cout << "Enter your height:" << std::endl;
    float height;
    std::cin >> height;

    std::cout << "Enter your initial:" << std::endl;
    char initial;
    std::cin >> initial;

    std::cout << "Are you a student?" << std::endl;
    bool isStudent;
    std::cin >> isStudent;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter your name:" << std::endl;
    std::string name;
    std::getline(std::cin, name);

    int daysLived = age * 365;

    std::cout << "Enter your favorite number!" << std::endl;
    int favoriteNumber;
    std::cin >> favoriteNumber;

    std::cout << "A decimal number" << std::endl;
    float decimalNumber;
    std::cin >> decimalNumber;

    std::cout << "A random single character" << std::endl;
    char character;
    std::cin >> character;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a string:" << std::endl;
    std::string randomString;
    std::getline(std::cin, randomString);

    std::cout << age << std::endl;
    std::cout << height << std::endl;
    std::cout << initial << std::endl;
    std::cout << isStudent << std::endl;
    std::cout << name << std::endl;
    std::cout << daysLived << std::endl;
    std::cout << favoriteNumber << std::endl;
    std::cout << decimalNumber << std::endl;
    std::cout << character << std::endl;
    std::cout << randomString << std::endl;

}
