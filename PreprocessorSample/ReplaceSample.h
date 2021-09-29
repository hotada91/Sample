#pragma once
#include <iostream>
#include "Header.h"

// OBJECT-LIKE MACROS 
#define IMO "In my opinion"
#define HELLO_NOQUOTE Hello

// Macro body can be another macro. It always complete macro-expanded
#define HELLO_WORLD HELLO

// Macro body can be string
#define HELLO "Hello"
// Can be number
#define THREE 3
// Can be a punctuator
#define PLUS_OP +
// Can be instructions
#define SAY_HELLO {cout << HELLO << endl;}

static const int MyNumber = 10;
#define MY_NUMBER MyNumber
// #define int INTEGER

// FUNCTION-LIKE 
#define PLUS(x,y) (x PLUS_OP y)
// Nested macro functions
#define PLUS3(x,y,z) (PLUS(PLUS(x,y),z)) = PLUS(x + y, z) = x + y + z
#define ARRAY_INIT(...) {__VA_ARGS__}
#define PRINT_OUT(fmt, ...) printf(fmt , ##__VA_ARGS__)
// #define PRINT_OUT(fmt, ...) printf(fmt, __VA_ARGS__)
// #define PRINT_OUT(fmt, ...) printf(fmt __VA_OPT__(,) __VA_ARGS__)




using namespace std;
void DoReplaceSample()
{
	cout << HELLO_WORLD << endl;
//	cout << HELLO_NOQUOTE << endl;
	cout << IMO << " 1 + 1 = " << 1 PLUS_OP 1 << " not " << THREE << endl;
//	SAY_HELLO;
	cout << "My number: " << MY_NUMBER << endl;

	// FUNCTION-LIKE MACROS
	int a = 1, b = 1;
	cout << a << " + " << b << " = " << PLUS(a, b) << endl;
	int arr[] = ARRAY_INIT(1, 2, 3);
	int sum = 0;
	for (int i = 0; i < sizeof(arr); i++)
	{
		sum = PLUS(sum, i);
	}

	sum = PLUS3(sum, 1, 1);

	PRINT_OUT("Sum of array: %d\n", sum);
	PRINT_OUT("Hello baby\n");
}

