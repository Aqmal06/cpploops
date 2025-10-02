#include <iostream>
using namespace std;

int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        // Print space
        for(space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Print bintang
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }    
    return 0;
}