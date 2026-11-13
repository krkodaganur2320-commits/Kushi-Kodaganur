//DIY6A
// Money arithmetic

#include <iostream>
using namespace std;

class Money {
public:
    int rupees, paise;

    Money(int r, int p) {
        rupees = r;
        paise = p;
    }

    Money operator+(Money m) {
        return Money(rupees + m.rupees
                     + (paise + m.paise) / 100,
                     (paise + m.paise) % 100);
    }

    Money operator-(Money m) {
        int total1 = rupees * 100 + paise;
        int total2 = m.rupees * 100 + m.paise;
        int d = total1 - total2;

        return Money(d / 100, d % 100);
    }
};

int main() {
    Money a(10, 80), b(5, 50);
    Money c = a + b;
    Money d = a - b;

    cout << c.rupees << "." << c.paise << endl;
    cout << d.rupees << "." << d.paise;

    return 0;
}