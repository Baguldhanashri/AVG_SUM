#include <iostream>
using namespace std;
int main(){
    int num1, num2, sum;
    float avg;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    sum = num1 + num2;
    avg = sum / 2;
    cout << "Sum of two numbers: " << sum << endl;
    cout << "Average of two numbers: " << avg << endl;
    return 0;
}
