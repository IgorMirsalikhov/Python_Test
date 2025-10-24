#include "Point.hpp"
#include <iostream>

int main(void) {
    // Test unary operator
    Point p1(2, -4);
    std::cout << p1.toString() << std::endl;
    
    Point p2 = -p1;
    std::cout << p2.toString() << std::endl;
    

    // Test ++ and -- operators
    p1++;
    ++p1;
    p2--;
    --p2;
    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;


    // Test tag
    Point ptag(1, 1, "Point 1");

    std::cout << ptag.toString() << std::endl;

    return 0;
}

