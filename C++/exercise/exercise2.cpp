// Sales = $95,000
//State Tax = 4%
//County Tax = 2%

#include<iostream>

using namespace std;

int main(){
    double sales = 95000;
    std::cout << "Sales: $"<< sales << endl;

    const double stateTaxRate =  .04;
    double StateTax = sales * stateTaxRate;
    std::cout << "State Tax: $"<< StateTax << endl;

    const double countyTaxRate =  .02;
    double countyTax = sales * countyTaxRate;
    std::cout << "County Tax: $"<< countyTax << endl;

    double totalTax = StateTax + countyTax;
    std::cout <<"Total Tax: $"<< totalTax;

    return 0;
}