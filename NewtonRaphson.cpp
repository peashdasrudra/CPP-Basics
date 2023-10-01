#include <bits/stdc++.h>
using namespace std;

// The function to find the root
double f(double x) {
    return x * x * x - 5 * x + 3;
}

// The derivative of f(x)
double df(double x) {
    return 3 * x * x - 5;
}

int main() {
    double initialGuess;
    double epsilon = 1e-6; // Tolerance
    int maxIterations = 100; // Max iterations

    cout << "Enter your initial guess: ";
    cin >> initialGuess;

    for (int i = 0; i < maxIterations; ++i) {
        double x1 = initialGuess - f(initialGuess) / df(initialGuess); // Formulae

        cout << "Iteration " << i + 1 << ": x" << i + 1 << " = " << x1 << endl;

        // Check if the absolute difference is smaller than epsilon
        if (abs(x1 - initialGuess) < epsilon) {
            cout << endl << "Approximate root: " << x1 << endl;
            break;
        }

        initialGuess = x1; // Update for the next iteration
    }
}
