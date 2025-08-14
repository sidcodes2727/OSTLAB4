#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &v, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    reverseArray(v, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
    return 0;
}

