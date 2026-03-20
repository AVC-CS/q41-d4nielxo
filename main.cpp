#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = 3.14159 * radius * radius;
        cout << area << endl;
    } else if (choice == 2) {
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        double area = length * width;
        cout << area << endl;
    } else if (choice == 3) {
        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        double area = base * height * 0.5;
        cout << area << endl;
    } else if (choice == 4) {
        cout << "Program Stopped" << endl;
    } else {
        cout << "Wrong number" << endl;
    }

    return 0;
}
