#pragma once
#include "iostream"

#define HELLO_NOQUOTE Hello
#define HELLO #HELLO_NOQUOTE

#define PARAMS_STRING(...) #__VA_ARGS__
// x will be not macro-expanded
#define STRINGIFY(x) #x 
#define STRINGIFY_COMPLETE(x) STRINGIFY(x)

// STRINGIFY(HELLO_NOQUOTE) "HELLO_NOQUOTE"
// STRINGIFY_COMPLETE(HELLO_NOQUOTE)  STRINGIFY(Hello) "Hello"
// x will be macro-expanded
// STRINGIFY_COMPLETE(HELLO_NOQUOTE) = STRINGIFY(Hello) = “Hello”
// STRINGIFY_COMPLETE(HELLO) = STRINGIFY(“Hello”) = “\”Hello\””

// #error "Dont come here"
#define ENGLISH "English"
#define HELLO_ENGLISH "Hello"
#define HELLO_JAPANESE "Konichiwa"
#define HELLO_HANXENG "An nho ong xe ua"
#define HELLO_TAUKHUA "Ni hao"
// #define SAY_HELLO_IN(X) { cout << "Say Hello in " << #X << ": " << HELLO_X << endl;}
// Macro arguments is not be macro-expanded in case of stringify and token pasting 
#define SAY_HELLO_IN(X) { cout << "Say Hello in " << #X << ": " << HELLO_##X << endl;}
#define CONCAT(x,y) x##y

using namespace std;
void StringifyExample()
{
	cout << STRINGIFY_COMPLETE(HELLO_NOQUOTE) << endl;
	cout << STRINGIFY_COMPLETE(HELLO) << endl;
	cout << STRINGIFY_COMPLETE(PARAMS_STRING(1,2,3)) << endl;

	SAY_HELLO_IN(ENGLISH);
	SAY_HELLO_IN(TAUKHUA);

	cout << CONCAT(1, 1) << endl;
	const char* s = "Hello" "World";
	cout << CONCAT("Hello", "World") << endl;

	
}

