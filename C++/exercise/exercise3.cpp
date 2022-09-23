// write a program to convert a temperature from fahrenheit to celcius.

#include<iostream>

using namespace std;

int main(){
    std::cout<<"Fahrenheit:";
    int fahrenheit;
    cin>> fahrenheit;
    double celsius = (fahrenheit - 32)/1.8;
    std::cout<< celsius;
    return 0;
}