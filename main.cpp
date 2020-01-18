#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
double A;
double B;
double C;
string quadratics;
string bigboy;


void roots() {
    double Bsquared = (B * B);
    double fourAC = (4 * A * C);
    double P = Bsquared - 4*A*C;
    double discriminant = sqrt(P);
    double T = (-B + discriminant) / (2 * A);
    double H = (-B - discriminant) / (2 * A);
    if (discriminant < 0) {
        cout << "no roots";
    } else {
        cout << "answers are " << T << ", " << H;
    }
}

void vertex() {
    double Bsquared = (B * B);
    double fourAC = (4 * A * C);
    double P = Bsquared - 4*A*C;
    double discriminant = sqrt(P);
    double root1 = (-B + discriminant) / (2 * A);
    double root2 = (-B - discriminant) / (2 * A);
    double xvertex = (root1 + root2) / 2;
    double yvertex = A * xvertex * xvertex + B * xvertex + C;
    cout << "vertex is (" << xvertex << ", " << yvertex << ")";
}

void quad() {

    cout << "Enter values A B C (with spaces in between) and vertex, roots, or all\n";
    cin >> A >> B >> C >> quadratics;
    if (quadratics == "vertex") {
        cout << "finding vertex...";
        vertex();
    } else if (quadratics == "roots") {
        cout << "finding roots...";
        roots();
    } else if (quadratics == "all") {
        cout << "finding all...\n";
        vertex();
        cout << "\n";
        roots();
    } else {
        cout << "try again idiot";
    }

}



int main() {
    cout << "Enter quadratics, linear, or trigonometry";
    cin >> bigboy;
    if (bigboy == "quadratics") {
        quad();
    }

}