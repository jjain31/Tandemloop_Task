#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> count;
    for (int i = 1; i <= 9; i++) count[i] = 0;
    for (int num : input) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) count[i]++;
        }
    }
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i];
        if (i != 9) cout << ", ";
    }
    return 0;
}
