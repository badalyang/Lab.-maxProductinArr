#include <iostream>
#include <ctime>
using namespace std;
#define N 8

int main() {
    int arr[N];
    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 50 - 25;
    }

    cout << "Array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max1 = arr[0], max2 = arr[0];
    int* p = nullptr;  

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] > max1) {
            max1 = arr[i];
            p = &arr[i];
        }
    }

    if (p != nullptr) {
        *p = 0;
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] > max2) {
            max2 = arr[i];
        }
    }

    int* q = nullptr; 
    int min1 = arr[0], min2 = arr[0];

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0 && arr[i] < min1) {
            min1 = arr[i];
            q = &arr[i];
        }
    }

    if (q != nullptr) {
        *q = 0;
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0 && arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int prod1 = max1 * max2;
    int prod2 = min1 * min2;

    if (prod1 > prod2) {
        cout << "Greater product: " << prod1 << endl;
    }
    else {
        cout << "Greater product: " << prod2 << endl;
    }

    return 0;
}
