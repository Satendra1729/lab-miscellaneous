#include <iostream>
#include "lib.h"

int main () {
    // testing
    int a = 10;
    int* ptr = &a; 
    int** ptrofptr = &ptr;
    std::cout << add(1,2) << std::endl;

    int favorite_number;
    std::cout << "Please enter your favorite number between 1 and 100" << std::endl;
    std::cin >> favorite_number;
    std::cout << "This is my favorite number too" << std::endl;
    std::cout << "Really " << favorite_number << " is my favorite number" << std::endl;
}