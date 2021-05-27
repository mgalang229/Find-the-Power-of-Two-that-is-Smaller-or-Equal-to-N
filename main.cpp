#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int exponent = 0;
    for (int i = 0; i < 30; i++) {
        // divide 'N' by increasing powers of 2 to find the
        // the maximum number (that is a power of 2) that can
        // still divide 'N'
        if (((N >> i) & 1) == 1) {
            exponent = i;
        }
    }
    cout << (1 << exponent) << '\n';
    return 0;
}
