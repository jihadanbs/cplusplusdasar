#include <iostream>

using namespace std;

int main()
{
    // Rumus Fahrenheit ke Celcius
    // °C = (°F – 32) × 5/9

    double fahrenheit;

    cout << "Suhu Fahrenheit = ";
    cin >> fahrenheit;

    double celcius = (fahrenheit - 32) * 5 / 9; // 5/9 bisa ganti 1.8
    cout << "Dalam celcius berarti = " << celcius;

    return 0;
}