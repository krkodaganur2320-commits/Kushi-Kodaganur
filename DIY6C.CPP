//DIY6C
// Safe array 

#include <iostream>
using namespace std;

class SafeArray {
    int a[5];

public:
    SafeArray() {
        for (int i = 0; i < 5; i++)
            a[i] = (i + 1) * 10;
    }

    int get(int i) {
        if (i < 0 || i >= 5)
            throw i;

        return a[i];
    }
};

int main() {
    SafeArray s;
    int i;

    cout << "Enter index: ";
    cin >> i;

    try {
        cout << "Value = " << s.get(i);
    }
    catch (int) {
        cout << "Array index out of range";
    }

    return 0;
}