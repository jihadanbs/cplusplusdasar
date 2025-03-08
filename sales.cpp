#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
    double stateTax = sales * .04;
    cout << "State Tax: " << stateTax << endl;
    double countyTax = sales * .02;
    cout << "County Tax: " << countyTax << endl;
    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << endl;
    double total = sales - (stateTax + countyTax);
    cout << "Duit Sekarang: $" << total << endl;

    return 0;
}