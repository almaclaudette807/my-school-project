#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height: ";
    cin >> height;

    if (height > 0) {
        if (height % 2 == 0) {
            for (int i = 1; i <= height; i += 2)
                cout << i << " ";
        } else {
            for (int i = 1; i < height / 2 + 1; i += 2)
                cout << i << " ";
            for (int i = height / 2; i >= 1; i -= 2)
                cout << i << " ";
        }
    } else {
        cout << "Height must be a positive number." << endl;
    }

    return 0;
}
