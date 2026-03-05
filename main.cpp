#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO
    if (choice == 1) {
        cout << "Enter the radius: ";
        cin >> radius;
        area = PI * radius * radius;
    } else if (choice == 2) {
        cout << "Enter the length and width: ";
        cin >> height >> width;
        area = height * width;
    } else if (choice == 3) {
        cout << "Enter the base and height: ";
        cin >> base >> height;
        area = base * height * 0.5;
    } else if (choice == 4) {
        cout << "Quitting\n";
        return 0;
    } else {
        cout << "Wrong number\n";
        return 0;
    }

    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    return 0;
}
