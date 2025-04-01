#include <iostream>
using namespace std;

int main() {
    int height = 150;
    int width = 200;
    
    // Draw the pyramid shape with given dimensions
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < width - 2 * i + 1; k++) {
            cout << "*";
        }
        
        // Draw a horizontal line after the pyramid
        cout << "\n";
    }
    
    return 0;
}
