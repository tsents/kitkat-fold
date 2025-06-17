#include <iostream>


/*
 *  Prints the repeated expression (times) times.
*/
void repeatePrint(std::string expression, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << expression;
    }
}

/**
 *  For a given number, returns the length of its representation as string.
 */
int printedLength(int number) {
    int len = 0;
    if (number == 0) { //Special case, so the logic with log10 doesnt fail.
        return 1;
    }
    if (number < 0) { //Plus one for the negetive sign.
        len++;
    }
    len += static_cast<int>(std::log10(static_cast<double>(std::abs(number)))) + 1;
    return len;
}

/**
 *  Preety prints a table of integers.
 */
void printTable(int** table, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            std::cout << table[i][j];
            repeatePrint(" ", 5 - printedLength(table[i][j]));
        }
        std::cout << table[i][cols - 1] << std::endl;
    }
}

/**
 *  Fills a integer table to be the multiplication table.
 */
void fillMulTable(int** mulTable, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mulTable[i][j] = (i + 1) * (j + 1);
        }
    }
}

int main()
{
    int** table = new int*[10];
    for (int i = 0; i < 10; i++) {
        table[i] = new int[10];
    }

    fillMulTable(table, 10, 10);
    printTable(table, 10, 10);

    for (int i = 0; i < 10; i++) {
        delete[] table[i];
    }
    delete[] table;
    return 0;
}