#include <iostream>
#include "helpfunc.h"


int main() {
    std::cout << "Hello, World!" << PI << std::endl;
    std::cout << "Did you know that 5+6 equals " << add(5,6) << "?" << std::endl;
    std::cout << "Moreover, 5 to the power of 6 equals " << pot(5,6) << "!" << std::endl;
    std::cout << "Besides, 7 factorial equals " << factorial_rec(4) << "!!!" << std::endl;
    return 0;
}
