#include <iostream>

enum  class months{
    Jan  = 1,
    Feb,
    March,
    Apr, 
    May,
    June,
    July,
    Aug, 
    Sept,
    Oct,
    Nov,
    Dec
};

int main(){

int monthnumber = 0;

   do {std::cout<<"Введите номер месяца (или 0, чтобы выйти из программы): ";
    std::cin >> monthnumber;
    if(monthnumber<0||monthnumber>12){
        std::cout<<"Неправильный ввод, введите число от 1 до 12: ";
        std::cin>>monthnumber;
    }
    months month = static_cast<months>(monthnumber); 
    switch(month){
        case months::Jan:
        std::cout<<"Январь";
        break;
        case months::Feb:
        std::cout<<"Февраль";
        break;
        case months::March:
        std::cout<<"Март";
        break;
        case months::Apr:
        std::cout<<"Апрель";
        break;
        case months::May:
        std::cout<<"Май";
        break;
        case months::June:
        std::cout<<"Июнь";
        break;
        case months::July:
        std::cout<<"Июль";
        break;
        case months::Aug:
        std::cout<<"Август";
        break;
        case months::Sept:
        std::cout<<"Сентябрь";
        break;
        case months::Oct:
        std::cout<<"Октябрь";
        break;
        case months::Nov:
        std::cout<<"Ноябрь";
        break;
        case months::Dec:
        std::cout<<"Декабрь";
        break;
    }
       std::cout<<std::endl;
   } while (monthnumber!=0);
   std::cout<<"До свидания!"<<std::endl;

}
