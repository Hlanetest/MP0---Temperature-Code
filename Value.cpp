#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, sum, product;
    float average;
    string fname, lname;
    cout << "Please enter your first name\n";
    cin >> fname;
    cout << "Please enter your last name\n";
    cin >> lname;

    cout << "Please enter four int values seperated by spaces\n";
    cin >> num1 >> num2 >> num3 >> num4;
    sum = num1 + num2 + num3 + num4;
    product = num1 * num2 * num3 * num4;
    average = sum / 4.0;

    cout << "The four numbers you entered are: " << num1 << ',' << num2 << ',' << num3 << ',' << num4 << "\n";
    cout << "For the numbers: " << num1 << ',' << num2 << ',' << num3 << ',' << num4 << "\n";
    cout << "The Sum is: " << sum << "\n";
    cout << "The Product is: " << product << "\n";
    cout << "The average is: " << average << "\n";



    cout << "Thank you " << fname << " " << lname << " For using " << fname << " " << lname << "'s program." << "\n";
        
}
