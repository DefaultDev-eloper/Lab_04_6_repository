#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double S, R;
    int n, k;

    k = 1;
    R = 0;

    while (k <= 10){
        n = 1;
        S = 0;
        while (n <= k){
            S += sin(k * n);
            n++;
        }
        R += S / k;
        k++;
    }
    cout << R << endl;

    k = 1;
    R = 0;
    do {
        n = 1;
        S = 0;
        do {
            S += sin(k * n);
            n++;
        } while (n <= k);
        R += S / k;
        k++;
    } while (k <= 10);
    cout << R << endl;

    R = 0;
    for (k = 1; k <= 10; k++){
        S = 0;
        for (n = 1; n <= k; n++){
            S += sin(k * n);
        }
        R += S / k;
    }
    cout << R << endl;

    R = 0;
    for (k = 10; k >= 1; k--){
        S = 0;
        for (n = k; n >= 1; n--){
            S += sin(k * n);
        }
        R += S / k;
    }
    cout << R << endl;

    return 0;
}