#include <iostream>
using namespace std;

int main() {
    const double ANNUAL_RISE = 1.5;
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    double rise5 = ANNUAL_RISE * years5;
    double rise7 = ANNUAL_RISE * years7;
    double rise10 = ANNUAL_RISE * years10;

    cout << "After " << years5 << " years: " << rise5 << " mm" << endl;
    cout << "After " << years7 << " years: " << rise7 << " mm" << endl;
    cout << "After " << years10 << " years: " << rise10 << " mm" << endl;

    return 0;
}
