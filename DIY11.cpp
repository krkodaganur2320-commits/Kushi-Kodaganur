//DIY11
//Counter array

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter() {
        value = 0;
    }

    void increment() {
        value++;
    }

    void reset() {
        value = 0;
    }

    int get() {
        return value;
    }
};

int main() {
    Counter c[3];

    c[0].increment();
    c[0].increment();

    c[1].increment();
    c[1].increment();
    c[1].increment();

    c[2].increment();

    cout << "Counter 1 = " << c[0].get() << endl;
    cout << "Counter 2 = " << c[1].get() << endl;
    cout << "Counter 3 = " << c[2].get() << endl;

    c[1].reset();

    cout << "Counter 2 after reset = " << c[1].get() << endl;

    return 0;
}