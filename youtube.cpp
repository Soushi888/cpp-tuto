#include <cstdio>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int ask_pizza() {
  int slices;
  printf("How many slices of pizza do you want ?: ");
  cin >> slices;

  return slices;
}

int count_pizza(int num) {
  double price = 1.25;
  double total = num * price;
  cout << "You have now " << num << " slices of pizza." << endl;
  printf("The total cost is %f$.\n", total);

  return total;
}

int main() {
  char hello[] = "Hello customer !\n";
  cout << hello;
  int slices = ask_pizza();
  count_pizza(slices);
  
  return EXIT_SUCCESS;
}
