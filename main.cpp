#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double calcul_tax(double sub_total, double rate) {
  double tax = (sub_total * rate) - sub_total;
  return tax;
}

int ask_pizza() {
  int slices;
  printf("How many slices of pizza do you want ?: ");
  cin >> slices;

  return slices;
}

int count_pizza(int num) {
  double price = 1.25;
  double sub_total = num * price;
  double tax = calcul_tax(sub_total, 1.15);
  double total = sub_total + tax;

  cout << "You have now " << num << " slices of pizza." << endl;
  printf("Sub-total : %f$.\n", sub_total);
  printf("+ tax : %f$.\n", tax);
  printf("Total : %f$.\n", total);

  return total;
}

int main() {
  char hello[] = "Hello customer !\n";
  cout << hello;
  int slices = ask_pizza();
  count_pizza(slices);

  return EXIT_SUCCESS;
}
