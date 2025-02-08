#include <iostream>
struct account{
    int accountNumber; 
    std::string userName; 
    float amount;
};

void changeAmount(account &a, float newAmount){
    a.amount = newAmount;
    std::cout<< "Ваш счёт: "<<a.userName<<", "<<a.accountNumber<<", "<<a.amount<<std::endl;
}

int main(){

    float userAmount = 0;
    account user;
    
    std::cout<<"Введите номер счёта: ";
    std::cin>>user.accountNumber;
    std::cout<<"Введите имя владельца: ";
    std::cin>>user.userName;
    std::cout<<"Введите баланс: ";
    std::cin>>user.amount;
    std::cout<<"Введите новый баланс: ";
    std::cin>>userAmount;
    changeAmount(user,userAmount);

}
