#include <iostream>
using namespace std;

int main() {
string myName;
myName = "Alfie Delos Santos Rivera";

cout << "Enter your name: ";
cin >> myName;
cout << "\nHello " << myName;
cout << "\n";

double num1, num2, sum, dif, pro, qou;

cout << "\nEnter the first number: ";
cin >> num1;
cout << "\nEnter the second number: ";
cin >> num2;

sum = num1 + num2;
dif = num1 - num2;
pro = num1 * num2;
qou = num1 / num2;

cout << "\nThe sum is " << sum;
cout << "\nThe diffence is " << dif;
cout << "\nThe product is " << pro;
cout << "\nThe qoutient is " << qou << endl;

return 0;
}
