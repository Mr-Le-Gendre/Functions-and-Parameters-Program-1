// Program Overview:
// This program calculates the radius, circumference, and area of a circle based on the provided coordinates of its center point and a point on its circumference.
// User input: The program prompts the user to input the coordinates of the center point and a point on the circumference.
// Program process: It then calculates the distance between the provided points, which is used to determine the radius of the circle.
// Output: Finally, it outputs the calculated radius, circumference, and area of the circle.

// Preconditions: Ensure valid coordinates (x1, y1, x2, y2) on the Cartesian plane.
// Postconditions: Returns the distance between the points (x1, y1) and (x2, y2).
double calculateDistance(double x1, double y1, double x2, double y2);

// Preconditions: Ensure valid coordinates (centerX, centerY, pointX, pointY) on the Cartesian plane.
// Postconditions: Returns the radius of the circle with the given center and circumference point.
double calculateRadius(double centerX, double centerY, double pointX, double pointY);

// Preconditions: Ensure a valid non-negative radius value.
// Postconditions: Returns the circumference of the circle with the given radius.
double calculateCircumference(double radius);

// Preconditions: Ensure a valid non-negative radius value.
// Postconditions: Returns the area of the circle with the given radius.
double calculateArea(double radius);

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // User input
    double centerX, centerY, pointX, pointY;

    // Prompt user for center coordinates
    cout << "Enter the x-coordinate of the center: ";
    cin >> centerX;
    cout << "Enter the y-coordinate of the center: ";
    cin >> centerY;

    // Prompt user for circumference point coordinates
    cout << "Enter the x-coordinate of a point on the circumference: ";
    cin >> pointX;
    cout << "Enter the y-coordinate of a point on the circumference: ";
    cin >> pointY;

    // Calculate radius
    double radius = calculateRadius(centerX, centerY, pointX, pointY);
    cout << "Radius of the circle: " << radius << endl;

    // Calculate circumference
    double circumference = calculateCircumference(radius);
    cout << "Circumference of the circle: " << circumference << endl;

    // Calculate area
    double area = calculateArea(radius);
    cout << "Area of the circle: " << area << endl;

    return 0;
}

// Function definitions

// Calculates the Euclidean distance between two points.
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Calculates the radius of the circle using the distance between center and circumference point.
double calculateRadius(double centerX, double centerY, double pointX, double pointY) {
    return calculateDistance(centerX, centerY, pointX, pointY);
}

// Calculates the circumference of the circle using the formula: 2 * pi * radius.
double calculateCircumference(double radius) {
    return 2 * 3.1416 * radius;
}

// Calculates the area of the circle using the formula: pi * radius^2.
double calculateArea(double radius) {
    return 3.1416 * pow(radius, 2);
}