#include <iostream>
#include <cmath>

// 1 1 1 
// 1 0.5 0

using namespace std;
int f(double a, double b, double c){
    if(c < 0) { return -1; }

    if(b - a > 0 && c > a) { return -1; }

    //if(a > c) { return 0; }
    
    return ceil((c - a) / (a - b)) + 1;
}

int main() {
    cout << f(1, 0.5, 0) << endl;
}