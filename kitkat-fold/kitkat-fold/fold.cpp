#include "fold.h"

#include <iostream>
#include <iomanip>  //For std::setw (set width) function.



void printMultiplicationTable(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int targetPrint = (i + 1) * (j + 1);
            std::cout <<  std::setw(PRINT_WIDTH) << targetPrint;
        }
        std::cout << std::endl;
    }
}
