#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double v = 15;
    double p0 = 760;
    double v0 = 0.6;
    int n[] = {10, 20, 30, 40, 50, 100, 150, 200, 250};
    int i = 0;

    while(i < 9){
        double p = p0*pow(v/(v+v0), n[i]);
        cout << "n = "<< n[i] << "       P = "<< p << endl;
        i++;
    }
}
