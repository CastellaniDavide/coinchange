/*
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <fstream>
#include <iostream>

using namespace std;

// input data
long long V[15];

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");
// 100 10 50 10 0 13 11 10 1 10 100 1000 200 1 1


    int coin_values[15] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000};
    long long sol[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    long long total = 0;

    for (int i = 0; i < 15; i++)
    {
        cin >> V[i];
        total += V[i] * coin_values[i];
    }
    //cout << total << endl;

    for (int i = 14; i >= 0; --i)
    {
        sol[i] = total / coin_values[i];
        total -= sol[i] * coin_values[i];
        //cout << total << endl;
    }
    total = 0;

    for (int i = 0; i < 15; i++)
    {
        total += sol[i] * coin_values[i];
    }
    //cout << total << endl;

    for (int i = 0; i < 15; i++)
        cout << sol[i] << " ";
    cout << endl;
    return 0;
}
