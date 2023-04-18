#include <iostream>

using namespace std;

int main() {
    double sales;
    cout << "Enter total sales:";
    cin >> sales;
    cout << "Total Sales $" << sales << endl;

    double stateTax = .04;
    cout << "State Tax $" << sales * stateTax << endl;

    double countyTax = .02;
    cout << "County Tax $" << sales * countyTax << endl;

    return 0;
}