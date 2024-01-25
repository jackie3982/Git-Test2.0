/*
Jacquline Bybee
CSCI 325 Spring24
 */
#include <iostream>

using namespace std;

int sum(int n);
// takes the integer as a parameter, sums the numbers from 1 to n, and returns the sum.

int main() {
  cout << "Hello World...\n";
  
  return 0;
}
int sum(int n){
  int total = 0;
  for( int i = 0; i < n; i++){
    total += i;
  }
  return total;
}
