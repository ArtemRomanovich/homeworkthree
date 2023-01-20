//https://github.com/ArtemRomanovich/homeworkthree
#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;

int main() {
    int loginone = 0;
    int passone = 0;
    int logintwo = 1;
    int passtwo = 1;
    int loginthree = 2;
    int passthree = 2;

    int num1,num2;
    cout<<"Введите логин: ";
    cin>>num1;
    cout<<"Введите пароль: ";
    cin>>num2;
    if ((num1 == loginone && num2 == passone)||(num1 == logintwo && num2 == passtwo)||(num1 == loginthree && num2 == passthree))
    {
        cout<<"Вы успешно авторизованы";
    }
    else
    {
        cout<<"Не пройдешь";
    }
}