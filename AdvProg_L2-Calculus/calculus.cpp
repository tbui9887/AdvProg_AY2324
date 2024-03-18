#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);


/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x) {
    double sin = 0;
    int n = 0;
    double term = x;
    while (abs(term) >= 0.00001) {
        sin += term;
        n++;
        term = -term * x * x / ((2 * n + 1) * (2 * n));
    }
    return sin;
}

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) {
    double cos = 0;
    int n = 0;
    double term = 1;
    while (abs(term) >= 0.00001) {
        cos += term;
        n++;
        term = -term * x * x / ((2 * n) * (2 * n - 1));
    }
    return cos;
}

/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    } else{
        return sqrt(x);
    }
}
