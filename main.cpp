/*
Jacquline Bybee
CSCI 325 Spring24
 */
#include <iostream>

using namespace std;

int sum(int n);
// takes the integer as a parameter, sums the numbers from 1 to n, and returns the sum.

int product(int n);
//computes the product from 1 to n.

int main() {
  int input = 0;
  cout << "Hello World...\nPlease enter a integer to sum the numbers from 1 to n...\n";
  cin >> input;
  cout << "The sum is: " << sum(input) << "\nThe product is: " << product(input) << endl;
  return 0;
}
int sum(int n){
  int total = 0;
  for( int i = 1; i <= n; i++){
    total += i;
  }
  return total;
}
int product(int n){
  int total = 1;
  for( int i = 1; i <= n; i++){
    total *= i;
  }
  return total;
}
