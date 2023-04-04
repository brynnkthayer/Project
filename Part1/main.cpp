// Programming Project 4, Part 1, by Brynn Thayer, COP2334, made with Repl.it IDE. A program that accepts input from the user while the value entered does not equal -1.

#include <iostream>
using namespace std;

// Separate functions are used for each calculation.
double calculateNumSquared(double &num) {
  double numSquared;

  numSquared = num * num;

  return numSquared;
}

double calculateNumDivided(double &num) {
  double numDivided;

  numDivided = num / num;

  return numDivided;
}

double calculateEquation1(double &num) {
  double equation1;

  equation1 = (num + 3) / 5;

  return equation1;
}

double calculateEquation2(double &num) {
  double equation2;

  equation2 = (((num + 3) / 5) + ((num + 7) / 2));

  return equation2;
}

int main() {

  double num;
  int counter = 0;

  cout << "Please enter n (-1 to exit), a number with or without decimals: ";
  cin >> num;

  // The loop checks the value of num before it runs, so the loop is bypassed if the exit code is entered.
  while (num != -1) {

    cout << num << " * " << num << " = " << calculateNumSquared(num) << endl;
    cout << num << " / " << num << " = " << calculateNumDivided(num) << endl;
    cout << "(" << num << " + 3) / 5 = " << calculateEquation1(num) << endl;
    cout << "[ ( (" << num << " + 3) / 5) + ( (" << num << " + 7) / 2) ] = " << calculateEquation2(num) << endl;

    counter = counter + 1;

    cout << "Please enter n (-1 to exit), a number with or without decimals: ";
    cin >> num;
  }
// When 0 is entered, numDivided returns as "nan", because 0 / 0 is undefined. When a character, such as "j", is entered, the output displays continuously without stopping for user input.
  
  cout << "This program ran " << counter << " times." << endl;

  return 0;
}