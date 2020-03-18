#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main() {
    int N = 8;
    int data[20][20] = {};
    int id = 1;
    for (int i = 0; i < std::ceil(N/2.0); ++i) {
        for (int j = i; j < N-i; ++j) {
            data[i][j] = id++;
        }

        for (int k = i+1; k < N-i; ++k) {
            data[k][N-i-1] = id++;
        }

        for (int j = N-i-2; j >= i; --j) {
            data[N-i-1][j] = id++;
        }

        for (int k = N-i-2; k >= i+1; --k) {
            data[k][i] = id++;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}