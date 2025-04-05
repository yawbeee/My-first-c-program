#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double C = 49.0;
    double A = 9.0 / 5 * C + 32;
    cout << "a. The value for a =  " << A << endl;
    int B = static_cast<int>('+');
    cout << "b. Integer value of '+': " << B << endl;
    double x = 8.9;
    int AnswerforC = round(x);
    cout << "c. Rounded value of x: " << AnswerforC << endl;
    string str = "C++ Programming is exciting";
    cout << "d. str: " << str << endl;
    int feet = 67;
    int inches = 57;
    int totalInches = 12 * feet + inches;
    cout << "e. Total Inches: " << totalInches << endl;
    int i = 16;
    i++;
    cout << "f. Incremented i: " << i << endl;
    double r = 4.0;
    double v = (4.0 / 3) * 3.1416 * pow(r, 3);
    cout << "g. Volume v: " << v << endl;
    double h = 5.0;
    double s = 2 * 3.1416 * r * r + 2 * 3.1416 * r * h;
    cout << "h. Surface area s: " << s << endl;
    int a = 9, b = 7, c = 9, d = 6, e = 4, f = 3, g = 9;
    h = 1;
    double AnswerforI = a + (b - c) / (d * (e * f - g * h));
    cout << "i. Result for i: " << AnswerforI << endl;
    a = 3;
    b = 2;
    c = 1;
    double AnswerforJ = (-b + sqrt(b * b - 8 * a * c)) / (4 * a);
    cout << "j. Result for j : " << AnswerforJ << endl;

    return 0;
}