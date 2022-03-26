/*
Write a program that inputs two grades separated by a space.  
If both grades are below a score of sixty then the program should output the message:
Student Failed:(
If both grades are greater than or equal to ninety five then the program should output the message:
Student Graduated with Honors:)
Otherwise the program should output the message:
Student Graduated!

For example, an execution could look like this:
Please enter 2 grades, separated by a space: 59 95
Student Graduated!
*/

#include <iostream>
using namespace std;

const int WORTH_OF_PENNY=1;
const int WORTH_OF_NICKEL=5;
const int WORTH_OF_DIME=10;
const int WORTH_OF_QUARTER=25;
const int CENT_FOR_DOLLAR=100;

int main() {
    int grade1,grade2;

    cout << "Please enter 2 grades, separated by a space: ";
    cin >> grade1 >> grade2;

    if (grade1<60 && grade2<60)
        cout << "Student Failed:(\n";
    else if (grade1>=95 && grade2>=95)
        cout << "Student Graduated with Honors:)\n";
    else
        cout << "Student Graduated!\n";


    return 0;                
}