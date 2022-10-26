#include <iostream>
using namespace std;

int main()
{
    // This program displays a square pattern
    int length;
    char symbol = 'X'; // symbol will be used to display the output pattern
    cout << "Please enter length between 1 and 10 " << endl;
    cin >> length; // user input

    while (length > 11 || length <= 0) // error validation
    {
        cout << "Error!" << endl;
        cout << "Please enter a length between 1 and 10" << endl;
        cin >> length; // user input
    }

    for (int i = 0; i < length; i++) // outer loop for length
    {

        for (int j = 0; j < length; j++) // inner loop for length
        {
            cout << symbol;
        }
        cout << endl;
    }
}