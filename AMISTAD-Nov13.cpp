#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int month;
    int day;
    int year;
    
    cout << "Hello, I am Joshua !!! Welcome to my first C++ application \n";
    cout << "Hey! What is your name? ";
    cin >> name;
    cout << "Good Day " << name;
    cout << "! It's nice to meet you! \n";
    cout << "When is your birthday? \n";
    cout << "Month: ";
    cin >> month;  
    cout << "Day: ";
    cin >> day;    
    cout << "Year: ";
    cin >> year;  
    
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year!" << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    
    return 0;
}