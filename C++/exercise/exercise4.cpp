//wrie a program to calculate the area of a circle.
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    std::cout<<"Enter radius:";
    double radius;
    cin>>radius;
    const double pi=3.14;
    double area = pi * pow(radius, 2);
    std::cout<<area;
    return 0;
}