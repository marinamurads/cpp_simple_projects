#include <iostream>

using namespace std;

int main() {
   double tempFahrenheit;
   cout << "Enter temperature in Fahrenheit:";
   cin >> tempFahrenheit;
   double tempCelsius = (tempFahrenheit - 32.0) * 5.0 / 9.0;

   cout << "Temperature in Celsius is:" << tempCelsius;

    return 0;
}