#pragma once

#include <string>

/**
 *	Prints the multiplication table, seperating rows by spaces and colums by newlines.
 *  :rows: [IN]	The number of rows in the table.
 *  :cols: [IN]	The number of columns in the table.
 */
void printMulTable(int rows, int cols);
/*
 *  Prints the repeated expression (times) times.
 *  :expression: [IN]	The expression to print
 *	:times:		 [IN]	The number of times to print the expression. doesnt print on negetive values.
 */
void repeatePrint(std::string expression, int times);

/**
 *  For a given number, returns the length of its representation as string.
 * :number: [IN]	The number to parse.
 * :return:			The length of the number printed representation.
 */
int printedLength(int number);


/**
 *  Pretty prints a table of integers.
 */
void printMulTable(int rows, int cols);
