#include <iostream>
using namespace std;

int main() {
char count = 'n';
    while(count == 'n'){
        int number1 = 0;
        cout << "Введіть перше число: ";
        cin >> number1;
        int number2 = 0;
        cout << "Введіть друге число: ";
        cin >> number2;
        int sum = number1 + number2;
        cout<<"Сума чисел:"<<sum<<endl;
        
        cout<<"Хочете вийти? y/n:";
        cin>>count;
    }
    
    return 0;
}
