#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n) {
    static vector<long long> cache(1000, -1);

    if (n <= 1) return n;
    if (cache[n] != -1) return cache[n];

    cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return cache[n];
}

void printFibonacciSequence(int count) {
    cout << "Posledovatelnost fibonachi: ";
    for (int i = 0; i < count; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int getUserInput() {
    int count;
    cout << "Vvedite kolvo chisel: ";
    cin >> count;
    return count;
}

int main() {
    int count = getUserInput();
    printFibonacciSequence(count);
    return 0;
}