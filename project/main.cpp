#include <iostream>
#include "Test.h"

int main() {
    std::cout << "main NS::var: " << NS::var << std::endl;
    Test test;
    std::cout << "main NS::var: " << NS::var << std::endl;
    NS::var = 13;
    std::cout << "main NS::var is set to: " << NS::var << std::endl;

    test.display();
    std::cout << "main NS::var: " << NS::var << std::endl;

    char c;
    std::cin >> c;
    return 0;
}
