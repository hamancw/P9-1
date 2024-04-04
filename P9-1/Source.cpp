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
}