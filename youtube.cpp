#include <cstdio>
#include <iostream>
using std::cout;
using std::endl;

int count_pizza(int num) {
  cout << "You have " << num << " slices of pizza." << endl;
  printf("You have %i pizza slices.\n", num);
  return EXIT_SUCCESS;
}

int main() {
  count_pizza(5);
  return EXIT_SUCCESS;
}
