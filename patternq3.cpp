#include <bits/stdc++.h>
using namespace std;

// Function to print a right-angled triangle with numbers
void print3(int n) {
    // Outer loop for rows (1 to n)
    for (int i = 1; i <= n; i++) {
        // Inner loop prints numbers from 1 up to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; // Move to next line after each row
    }
}

int main() {
    int n;
    cin >> n;   // Take input for number of rows
    print3(n);  // Call function to print pattern
    return 0;
}
