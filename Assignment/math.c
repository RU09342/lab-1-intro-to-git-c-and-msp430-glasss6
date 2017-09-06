/*
 * math.c
 *
 *  Created on: Sep 6, 2017
 * 	Last Edited: Sept 6, 2017
 *      Author: Stephen Glass
 */

#include "math.h"

int math(int num1, int num2, char Operator) // Returns math result as integer
{
	int result = 0;
	switch(Operator)
	{
		case '+': // Add
			result = num1 + num2;
			break;
		case '-': // Subtract
			result = num1 - num2;
			break;
		case '*': // Multiply
			result = num1 * num2;
			break;
		case '/': // Divide
			result = num1 / num2;
			break;
		case '%': // Modulus
			result = num1 % num2;
			break;
		default: // Default case
			// Error
			break;
	}
	return result; // Returns 0 if no operation performed
}