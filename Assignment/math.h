/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 6, 2017
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
*/

#ifndef MATH_H_
#define MATH_H_

int math(int num1, int num2, char Operator);
/*
Num1: Integer 1
Num2: Integer 2
Operator: (character) Operation to be performed on two integers
Valid operations - 
	'+' add two integers
	'-' subtract two integers
	'/' divide two integers
	'%' modulus two integers
*/

#endif /* MATH_H_ */
