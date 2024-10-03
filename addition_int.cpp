#include<iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of integers is: " << sum(num) << endl;
    return 0;
}
/*
Enter a number: 3
Sum of integers is: 6
*/