#include <iostream>

using namespace std;

int main()
{
    int num;
    int a[4];
    cout << "Enter a four digit number: ";
    cin >> num;
    if (num > 999 && 10000){
        if(num > 0){
            for(int i = (sizeof(a)/sizeof(a[i]))-1; i>=0; i--){
                a[i] = num % 10;
                num = num / 10;
            }

        }
        for(int i = 0; i<4; i++){
            cout << a[i];
            if(i == 3){
                continue;
            }
            cout << ", ";
        }
    }
    else {
        cout << "Enter a valid four digit number!";
    }

    return 0;
}
