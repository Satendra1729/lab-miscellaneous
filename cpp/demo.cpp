#include <iostream>
#include "lib.h"

int main () {
    // testing
    int a = 10;
    int* ptr = &a; 
    int** ptrofptr = &ptr;
    std::cout << add(1,2) << std::endl;
}