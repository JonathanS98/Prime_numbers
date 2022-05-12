#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int num, num2, i, j;

    cout << "Enter Lower bound: ";
    cin >> num;
    cout << "Enter higher bound: ";
    cin >> num2;

    cout << "Primenumbers between " << num << " and " << num2 << " is: " << endl;

    for (i=num; i<=num2; i++){
        if(i == 1 || i == 0)
            continue; // Breaks the loop and countinues with the next loop

        int temp = 1;

        for (j=2; j<=i / 2; j++){
            if (i % j == 0){
                temp = 0;
                break; // jump out of loop
            }

        }
        if(temp == 1)
            cout << i << " ";


    }
    return 0;
}
