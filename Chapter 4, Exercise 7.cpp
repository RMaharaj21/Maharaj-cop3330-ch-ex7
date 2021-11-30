/******************************************************************************
7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out.
*******************************************************************************/
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Maharaj
 */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter two numbers then an operand\n";
    cout<<"Example: 9 5 +; six two /; one 5 *\n";
    cout<<"Enter: ";
    
    /*Varible decaration*/
    string num1, num2, operand;
    double x1, x2;
    
    cin >> num1 >> num2 >> operand;
    
    /*Determining the values given is they are entered as a word*/
    if(num1 == "zero"){
        x1 = 0;
    }
    else if(num1 == "one"){
        x1 = 1;
    }
    else if(num1 == "two"){
        x1 = 2;
    }
    else if(num1 == "three"){
        x1 = 3;
    }
    else if(num1 == "four"){
        x1 = 4;
    }
    else if(num1 == "five"){
        x1 = 5;
    }
    else if(num1 == "six"){
        x1 = 6;
    }
    else if(num1 == "seven"){
        x1 = 7;
    }
    else if(num1 == "eight"){
        x1 = 8;
    }
    else if(num1 == "nine"){
        x1 = 9;
    }
    else if(num1 =="Zero"){
        x1 = 0;
    }
    else if(num1 =="One"){
        x1 = 1;
    }
    else if(num1 =="Two"){
        x1 = 2;
    }
    else if(num1 =="Three"){
        x1 = 3;
    }
    else if(num1 =="Four"){
        x1 = 4;
    }
    else if(num1 =="Five"){
        x1 = 5;
    }
    else if(num1 =="Six"){
        x1 = 6;
    }
    else if(num1 =="Seven"){
        x1 = 7;
    }
    else if(num1 =="Eight"){
        x1 = 8;
    }
    else if(num1 =="Nine"){
        x1 = 9;
    }
    else if(num1 =="0"){
        x1 = 0;
    }
    else if(num1 =="1"){
        x1 = 1;
    }
    else if(num1 =="2"){
        x1 = 2;
    }
    else if(num1 == "3"){
        x1 = 3;
    }
    else if(num1 =="4"){
        x1 = 4;
    }
    else if(num1 =="5"){
        x1 = 5;
    }
    else if(num1 =="6"){
        x1 = 6;
    }
    else if(num1 =="7"){
        x1 = 7;
    }
    else if(num1 =="8"){
        x1 = 8;
    }
    else if(num1 =="9"){
        x1 = 9;
    }
    else{
        x1 = 0;
    }
    
    
    if(num2 == "zero"){
        x2 = 0;
    }
    else if(num2 == "one"){
        x2 = 1;
    }
    else if(num2 == "two"){
        x2 = 2;
    }
    else if(num2 == "three"){
        x2 = 3;
    }
    else if(num2 == "four"){
        x2 = 4;
    }
    else if(num2 == "five"){
        x2 = 5;
    }
    else if(num2 == "six"){
        x2 = 6;
    }
    else if(num2 == "seven"){
        x2 = 7;
    }
    else if(num2 == "eight"){
        x2 = 8;
    }
    else if(num2 == "nine"){
        x2 = 9;
    }
    if(num2 =="Zero"){
        x2 = 0;
    }
    else if(num2 =="One"){
        x2 = 1;
    }
    else if(num2 =="Two"){
        x2 = 2;
    }
    else if(num2 =="Three"){
        x2 = 3;
    }
    else if(num2 =="Four"){
        x2 = 4;
    }
    else if(num2 =="Five"){
        x2 = 5;
    }
    else if(num2 =="Six"){
        x2 = 6;
    }
    else if(num2 =="Seven"){
        x2 = 7;
    }
    else if(num2 =="Eight"){
        x2 = 8;
    }
    else if(num2 =="Nine"){
        x2 = 9;
    }
    if(num2 =="0"){
        x2 = 0;
    }
    else if(num2 =="1"){
        x2 = 1;
    }
    else if(num2 =="2"){
        x2 = 2;
    }
    else if(num2 =="3"){
        x2 = 3;
    }
    else if(num2 =="4"){
        x2 = 4;
    }
    else if(num2 =="5"){
        x2 = 5;
    }
    else if(num2 =="6"){
        x2 = 6;
    }
    else if(num2 =="7"){
        x2 = 7;
    }
    else if(num2 =="8"){
        x2 = 8;
    }
    else if(num2 =="9"){
        x2 = 9;
    }
    else{
    	x2 = 0;
    }

    cout<<"\n";
    if(operand == "+"){
        cout<< "The sum of "<< x1 << " and " << x2 << " is " << x1 + x2;
    }
    else if(operand == "-"){
        cout<< "The difference of "<< x1 << " and " << x2 << " is " << x1 - x2;
    }
    else if(operand == "*"){
        cout<< "The product of "<< x1 << " and " << x2 << " is " << x1 * x2;
    }
    else if(operand == "/"){
        cout<< "The quotient of "<< x1 << " and " << x2 << " is " << x1 / x2;
    }
    else{
        cout<< "error";
    }
    

    return 0;
}


