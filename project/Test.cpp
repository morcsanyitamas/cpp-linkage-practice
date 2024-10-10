#include <iostream>
#include "Test.h"

Test::Test() {
    std::cout << "Test::Test NS::var is: " << NS::var << std::endl;
    NS::var = 5;
    std::cout << "Test::Test NS::var is set to " << NS::var << std::endl;
}

void Test::display() {
    std::cout << "Test::display NS::var: " << NS::var << std::endl;
}
