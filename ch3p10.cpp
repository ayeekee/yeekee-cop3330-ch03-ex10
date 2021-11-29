/*
    Write a program that takes an operation followed by two operands and outputs the result.
    Read the operation into a string called operation and use an if-statement to figure out which operation the user wants,
    for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations
    called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include "std_lib_facilities.h"

int main(){

    String operation;
    double operand1, operand2;

    cout << "Enter an operation and two operands (in that order): ";
    cin >> operation >> operand1 >> operand2;

    double result;

    if(operation == "+" || operation == "plus"){
        result = operand1 + operand2;
    } else if(operation == "-" || operation == "minus"){
        result = operand1 - operand2;
    } else if(operation == "*" || operation == "mul"){
        result = operand1 * operand2;
    } else if(operation == "/" || operation == "div"){
        result = operand1 / operand2;
    }

    cout << operand1 << " " << operation << " " << operand2 << " is " << result;

    return 0;
}
