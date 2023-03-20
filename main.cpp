#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    /*for (double beta = 8.35; beta <= 12.8; beta += 1.6) {
        for (double alpha = -.9; alpha <= -.4; alpha += .25) {
            double sd = 1 - beta * pow(sin(pow(alpha, 2)), 2);
            double sn = 4.5 * beta * cos(alpha / 2 + M_PI / 16);
            double s = sd / sn;

            printf("beta = %.2f\t|\t", beta);
            printf("alpha = %.2f\t|\t", alpha);
            printf("s = %f\n", s);
        }
        cout << "\n";
    }

    cout << "-----------------------------------------\n" << endl;

    for (double alpha = -.9; alpha <= -.4; alpha += .25) {
        for (double beta = 8.35; beta <= 12.8; beta += 1.6) {
            double sd = 1 - beta * pow(sin(pow(alpha, 2)), 2);
            double sn = 4.5 * beta * cos(alpha / 2 + M_PI / 16);
            double s = sd / sn;

            printf("alpha = %.2f\t|\t", alpha);
            printf("beta = %.2f\t|\t", beta);
            printf("s = %f\n", s);
        }
        cout << "\n";
    }*/

//    int *ar = new int(1);



    cout<<4.0*5.0;
}

//1
/*const double a = 4.652;
const double b = 3.825;
const double ab = a + b;

cout << "Enter value:" << endl;
double q;
cin >> q;

double o;
if (q > ab) {
    o = pow(log(q + a), 2);
} else if (b < q && q <= a) {
    o = (pow(b, 2) / 2) + a * pow(sin(q), 3);
} else {
    cout << "Incorrect argument. Try again with a different number." << endl;
    return 0;
}

cout << "Result: " << o << endl;*/

//2
/*double b = 6.215;
double betaStart;

cout << "Enter value variable \'betaStart\':" << endl;
cin >> betaStart;

int loopStart = pow(40, 0);
int loopEnd = pow(54, 0);
int loopStep = ((loopStart - loopEnd) / 7) + 1;
if (loopStep < 0) loopStep = -loopStep;

for (double i = loopStart; i < loopEnd; i += loopStep){

    double mod = b * cos(betaStart + .6);

    if (mod < 0) mod = -mod;

    double d = log(mod);

    double ctgB = 1 / tan(betaStart);
    double n = pow(b * ctgB, 3);

    double a = d / n;

    cout << "Result: " << a << endl;
}*/

//3
/*const double betaStart = 40 * (M_PI / 180),
            betaLast = 54 * (M_PI / 180),
            b = 6.215;
    const int N = 7;

    double beta = betaStart;
    double step = fabs((betaStart - betaLast) / N);

    for (int i = 0; i < N; i++) {
        double d = log(fabs(b * cos(beta + .6)));
        double n = pow(sqrt(b * (1 / tan(beta))), 3);

        cout << "beta = " << (beta * 180.0) / M_PI << "\talpha = " << d / n << endl;
        beta += step;
    }

    return 0;*/

//4
/*const float a = 1.2,
            bStart = 9.5,
            bEnd = 12.75,
            step = .25;

    for (double b = bStart; b < bEnd; b += step) {
        double y = (b < 10.6) ? sqrt(b + 1) : b + a;

        double z = pow(b, y) - pow(sqrt(a * y), 3);

        string whichY = (b < 10.6) ? "y-1" : "y-2";
        cout << "b = " << b << "  \t" + whichY << "\tz = " << z << endl;
    }*/

//5
/*double num;

    cout << "Enter value:" << endl;
    cin >> num;

    double ar[] = {-7, 2, -8, -15.2, .1, 2, -52, 3.1, -7, 1564.4, -2, 3.14, 28, 9.3, 18, 7};

    int arSize = sizeof(ar) / sizeof(double);
    for (int i = 0; i < arSize; i++) {
        double fabsE = fabs(ar[i]);

        if (fabsE == num) cout << "Number of elem: " << i << endl;
    }*/

//6
/*double t[] = {1, 56, .21, 65, 98, 4, .3241, 2335.2, 18.2, 74.1, 45.0, 6, 32, 1213, 123, 12, 98, 56};
    const int tSize = sizeof(t) / sizeof(double);

    double result = 1;
    for (int i = 0; i < tSize; ++i) {
        if (i < 7)
            result *= t[i];
        else if (i % 2 == 0)
            result += t[i];
    }

    cout << result << endl;

    return 0;*/

//7
/*
    for (double b = 8.35, alpha = -.9;
         b <= 12.8, alpha <= -.4;
         b += 1.6, alpha += .25) {

        double sd = 1 - b * pow(sin(pow(alpha, 2)), 2);
        double sn = 4.5 * b * cos(alpha / 2 + M_PI / 16);
        double s = sd / sn;

        cout << s << endl;
    }


    for (double b = 8.35; b <= 12.8; b += 1.6) {
        for (double alpha = -.9; alpha <= -.4; alpha += .25) {
            double sd = 1 - b * pow(sin(pow(alpha, 2)), 2);
            double sn = 4.5 * b * cos(alpha / 2 + M_PI / 16);
            double s = sd / sn;

            cout << s << endl;
        }
        cout << "\n";
    }
*/

//8
/*const int mSize = 6;
    int a[mSize][mSize];

    int n = 1;
    for (auto &i: a) {
        for (int &j: i) j = n++;
    }

    for (auto &i: a) {
        for (int j: i) cout << j << "\t";

        cout << endl;
    }

    for (int i = 0; i < mSize; ++i) {
        a[i][i] = 0;
    }

    cout << "\n\n";

    for (auto &i: a) {
        for (int j: i) cout << j << "\t";

        cout << endl;
    }*/
