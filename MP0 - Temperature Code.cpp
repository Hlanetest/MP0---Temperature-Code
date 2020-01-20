#include <iostream>
using namespace std;

const double FAHR_2_CEL_BASE_ADJ = 32.0; 
const double FAHR_2_CEL_FACTOR = 5.0 / 9.0;
const double CEL_2_kel = 273.15;

int main()
{
    double input_temp;
    double celsius_temp;

    cout << "Please enter the temperature in Fahrenheit degrees: ";
    cin >> input_temp;

    celsius_temp = (input_temp - FAHR_2_CEL_BASE_ADJ) * FAHR_2_CEL_FACTOR;
    cout << "A temperature of " << input_temp << " degrees ";
    cout << "Fahrenheit converts to " << celsius_temp;
    cout << " degrees celsius.\nIn degrees kelvin it is ";
    cout << celsius_temp + CEL_2_kel << "\n\nThank you for using " << "this delightful program which was \nkeyed into the " << "computer by Harrison lane.\n";
    exit(0);
}
