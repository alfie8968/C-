#include <iostream>
using namespace std;

int main() {
    const double conversionFactors = 3.28084;
    double meters, feet;

    cout << "Enter the distance in meters: ";
    cin >> meters;

    feet = meters * conversionFactors;

    cout << meters << " Meters is equal to " << feet << " Feet" << endl;

    return 0;
}
