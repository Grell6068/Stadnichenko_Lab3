#include <iostream>
using namespace std;

int main() {
char count = 'n';
    while(count == 'n'){
        int number = 0;
        cout << "Введіть перше число: ";
        cin >> number;
        
        int sum = 0;
        while (number > 0) {
            sum += number % 10; 
            number /= 10;
        }
        
        cout << "Сума цифр числа: " << sum << endl;
        
        cout<<"Хочете вийти? y/n:";
        cin>>count;
    }
    
    return 0;
}
