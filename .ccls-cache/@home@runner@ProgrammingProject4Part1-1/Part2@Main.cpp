// Programming Project 4, Part 2, by Brynn Thayer, COP2334, made with Repl.it IDE. A program that takes input from the user for the value of N (the stopping point) and prints out the first N ordinals, followed by Hello.

#include <iostream>
using namespace std;

int main() {

  char *ordinal[] = {"st", "nd", "rd", "th"};

int N;

cout << "Enter a number: ";
cin >> N;

for (int i = 1; i <= N; i = i + 1) {

  int num = i%100;

  // 4th through 20th are the exception to all other rules
  if (num > 3 && num < 21)
    cout << i << ordinal[3] << " Hello" << endl;

  else {

    if (num%10 == 1) 
      cout << i << ordinal[0] << " Hello" << endl;

    else if (num%10 == 2)
      cout << i << ordinal[1] << " Hello" << endl;

    else if (num%10 == 3) 
      cout << i << ordinal[2] << " Hello" << endl;

    else
      cout << i << ordinal[3] << " Hello" << endl;
  }
}
}
    