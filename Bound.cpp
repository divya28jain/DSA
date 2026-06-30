#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int LastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[5] = {0, 2, 2, 2, 3};

    cout << "First Occurrence of 2 is " << FirstOcc(even, 5, 2) << endl;
    cout << "Last Occurrence of 2 is " << LastOcc(even, 5, 2) << endl;

    return 0;
}