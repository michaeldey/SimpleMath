/* 
 * File:   main.cpp
 * Author: mdey
 *
 * Created on May 17, 2017, 2:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{    
    //instantiate the integers for user input
    int int1, int2, int3, int4, int5;
    
    //instantiate the helper variables
    int sum;
    int avg;
    int prod;
    int smallest;
    int largest;
    int count=0;
       
    
    cout << "Please enter integer 1:";
    cin >> int1;
    sum = int1;
    count++;
    
    cout << "\nPlease enter integer 2:";
    cin >> int2;    
    sum += int2;
    count++;
    
    //calculate current largest and smallest variables
    //if the variables are equal, the default is the if statement
    //      since they are equal we don't need to calculate the else, and runtime
    //      is slightly faster
    if (int1>=int2)
    {
        largest = int1;
        smallest = int2;
    }else
    {
        largest = int2;
        smallest = int1;
    }
    
    cout << "\nPlease enter integer 3:";
    cin >> int3;
    sum += int3;
    count++;
    
    //calculate largest integer so far
    if (int3 > largest)
    {
        largest = int3;
    }
    //calculate smallest integer so far
    if (int3 < smallest)
    {
        smallest = int3;
    }
    
    cout << "\nPlease enter integer 4:";
    cin >> int4;
    sum += int4;
    count++;
    
    //calculate largest integer so far
    if (int4 > largest)
    {
        largest = int4;
    }
    //calculate smallest integer so far
    if (int4 < smallest)
    {
        smallest = int4;
    }

    
    cout << "\nPlease enter integer 5:";
    cin >> int5;
    sum += int5;
    count++;

    //calculate largest integer so far    
    if (int5 > largest)
    {
        largest = int5;
    }
    
    //calculate smallest integer so far
    if (int5 < smallest)
    {
        smallest = int5;
    }
    
    avg = sum/count;    //calculate the average
    
    prod = int1 * int2 * int3 * int4 * int5; //calculate the product
    
    //print variables to screen
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Product: " << prod << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    cout << endl;
    
    //print out the quotient of the first divided by second integers
    //this drops off the remainder
    cout << "Quotient of " << int1 << "/" << int2 << " : " << (int1/int2) << endl; 
    
    //print out the remainder of the fourth divided by fifth integers
    cout << "Remainder of " << int4 << "%" << int5 << " : " << (int4%int5) << endl;
    
    
    return 0;
}




