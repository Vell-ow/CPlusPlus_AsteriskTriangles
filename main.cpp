#include <iomanip>
#include <cstdlib>
#include <cmath>
// This program takes an integer provided by the user and uses a function 
// to process and display the result.
// 
// Programmer:    Andrew Coviello
// Module 10
// Project 1
// Problem Statement: Using a given integer and a function inside the code,
// print a triangle of a desired width.
// 
// 1. Define the function.
// 2. Prompt the user for an integer.
// 3. Error check for 0 or values above 20.
// 4. Print the results to the screen.
//
#include <iostream>
using namespace std;

// void triangle(int width);

int main() {

  string trongle;
  // integer that helps function determine the amount of asterisks in the
  // longest line of the triangle 

  // integers for triangle length and number of asterisks
  int numberForTriangle, trongleLen = trongle.length();

  // beginning display shows choices and prompts user for character 
  cout << setw(30) << "****** Trian9les ******\n" << endl;
  do
  {
    cout << setw(30) << "Enter the number of spaces tall you'd like your triangle to be: " << endl;
    cin >> numberForTriangle;
    if(numberForTriangle == 0)
    {
      cout << "Can't make a triangle with zero asterisks." << endl;
    }
    else if(numberForTriangle < 1 || numberForTriangle > 20)
    {
      cout << "You're being too greedy with your triangles. Take a seat, young Skywalker." << endl;
      continue;
    }


    for(int i = 1; i < numberForTriangle + 1; i++)
    {
      // the inner loop increases the number of asterisks
      // incrementation
      for(int j = 0; j < i; j++)
      {
        // print a single asterisk. The outer loop will add asterisks to
        // the string as it progresses      
        cout << "*";
      }
      cout  << endl;
    }
    for(int i = numberForTriangle - 1; i > 0; i--)
    {
      // PRINT NEW LINE in the outer one
      // keep the count and create new lines
      // determine the number of asterisks
      // decrementation
      for(int j = 0; j < i; j++)
      {
        // print a single asterisk. The outer loop will take away asterisks 
        // from the string as it progresses      
        cout << "*";
      }
      cout << endl;
    }    
  }
  while(numberForTriangle != 0);
}
