#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int sum = 0;
    int number;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
