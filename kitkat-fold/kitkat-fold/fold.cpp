#include "fold.h"

#include <iostream>

void repeatePrint(std::string expression, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << expression;
    }
}

int printedLength(int number) {
    int len = 0;
    if (number == 0) { // Special case, so the logic with log10 doesnt fail.
        return 1;
    }
    if (number < 0) { // Plus one for the negetive sign.
        len++;
    }
    len += static_cast<int>(std::log10(static_cast<double>(std::abs(number)))) + 1;
    return len;
}

void printMulTable(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            int targetPrint = (i + 1) * (j + 1);
            std::cout << targetPrint;
            repeatePrint(" ", 5 - printedLength(targetPrint));
        }
        std::cout << (i + 1) * cols << std::endl;
    }
}
