#include <iostream>
#define EPSILON 0.001

double f(double x) {
    return x*x*x+2*x*x+10*x-20;
}

double ft(double x){
    return 3*x*x*2+4*x+10;
}

void nry(double x) {
    double h = f(x)/ft(x);
    while (abs(h) >= EPSILON) {
        h = f(x)/ft(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }

    std::cout << "x = " << x << std::endl;
}

int main() {
    double x0 = 0;
    nry(x0);

    return 0;
}
