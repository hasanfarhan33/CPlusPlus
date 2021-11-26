#include <iostream>
using namespace std; 

int main()
{
    //ABSOLUTE BASIC
    /*cout << "Hello World!\n";
    cout << "Time to learn c++ again" << endl; 
    cout << "Shouldn't take that long this time." << endl; */
    
    //Variables
    /*float annualSalary; 
    cout << "Enter your annual salary" << endl;
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12; 
    cout << "Your montly salary is: " << monthlySalary << endl; 
    cout << "In 10 years you will earn " << annualSalary * 10 << endl; 

    char character = 'a'; */

    //DATA TYPES IN C++ AND HOW TO USE THE SIZE OF THE OPERATOR 
    int yearOfBirth = 1998; 
    char gender = 'm'; 
    bool isAnIdiot = true; 
    float averageGrade = 2.7; 
    double balance = 2394829501; //Double takes double the space of float therefore 8 bytes 

    cout << "The size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Int min value is " << INT_MIN << endl; 
    cout << "Int max value is " << INT_MAX << endl; 
    cout << endl; 
    cout << "The size of char is " << sizeof(char) << "bytes" << endl; 
    cout << endl; 
    cout << "The size of bool is " << sizeof(bool) << " bytes" << endl; 
    cout << endl; 
    cout << "The size of float is " << sizeof(float) << " bytes" << endl;
    cout << endl; 
    cout << "The size of double is " << sizeof(double) << " bytes" << endl;
    cout << endl; 

    system("pause > 0"); //Gets rid of the junk in the console 
}

