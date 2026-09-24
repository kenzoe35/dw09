#include <iostream>
#include "dw.h"

int main() {
    int numbers[]{5, 17, 3, 1, -15, 20};

    std::cout << "The smallest is: " << find_minimum(numbers, 6) << std::endl;

    return 0;

}
    
