#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {

    srand(time(0));

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 9000 + 1000;
    }

    cout << "The random integers: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even indicies: ";
    for (int i = 0; i < 10; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even values: ";
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Reversed order: ";
    for (int i = 9; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "First and last: ";
    cout << arr[0] << " " << arr[9] << endl;
}