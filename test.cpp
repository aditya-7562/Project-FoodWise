#include <iostream>
using namespace std;

int main() {
    double *principal, *rate, *time, *interest;
    
    // Allocate memory for variables
    principal = new double;
    rate = new double;
    time = new double;
    interest = new double;
    if (principal == nullptr || rate == nullptr || time == nullptr || interest == nullptr) {
        cout << "Memory allocation failed. Exiting..." << endl;
        return 1;
    }

    // Input
    cout << "Enter Principal Amount: ";
    cin >> *principal;
    cout << "Enter Rate of Interest (in percentage): ";
    cin >> *rate;
    cout << "Enter Time (in years): ";
    cin >> *time;

    // Calculate Simple Interest
    *interest = (*principal * *rate * *time) / 100.0;

    // Output
    cout << "Principal Amount: $" << *principal << endl;
    cout << "Rate of Interest: " << *rate << "%" << endl;
    cout << "Time: " << *time << " years" << endl;
    cout << "Simple Interest: $" << *interest << endl;

    // Free allocated memory
    delete principal;
    delete rate;
    delete time;
    delete interest;

    return 0;
}