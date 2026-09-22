/*

Programmers {
  1. Mario Aguilera Piceno
}

File: main.cpp
About: A basic structured stack example.
Created: 09/22/2026
Last Modified: 09/22/2026

*/

#include <iostream>
#include <stack>

int main() {
  // Create a stack structure.
  std::stack<int> intStack;

  // Stack
  intStack.push(20);
  intStack.push(30);
  intStack.push(40);

  // Pop and save the value at the top
  int topMost = intStack.pop();

  // Output
  std::cout << intStack << std::endl;
  std::cout << "Top Most Value: " << std::to_string(intStack) << std::endl;
}
