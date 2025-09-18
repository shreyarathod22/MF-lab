#include <iostream>
using namespace std;

long nPr(int n, int r) {
    long result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
    }
    return result;
}

int main() {
    int n = 12;  
    int r = 5;    
    long totalPermutations = nPr(n, r);
    
    long totalWays = totalPermutations / 2;
    cout << "Number of ways: " << totalWays << endl;
    return 0;
}
