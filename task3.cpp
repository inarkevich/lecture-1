#include <iostream>
struct adress {
      std::string city;
      std::string street; 
      int house;
      int flat;
      int index;
   };
void printAdress (adress &a){
std::cout<<"Город: "<<a.city<<std::endl;
std::cout<<"Улица: "<<a.street<<std::endl;
std::cout<<"Номер дома: "<<a.house<<std::endl;
std::cout<<"Номер квартиры: "<<a.flat<<std::endl;
std::cout<<"Индекс: "<<a.index<<std::endl;
}


int main(){

  adress adressOne = {"Москва", "Арбат", 12, 8, 123456};
  adress adressTwo = {"Ижевск", "Пушкина", 59, 143, 953769};
  adress userAdress;
  
  printAdress(adressOne);
  printAdress(adressTwo);
  
  std::cout <<"Введите город: ";
  std::cin >>userAdress.city;
  std::cout<<"Введите улицу: ";
  std::cin>>userAdress.street;
  std::cout<<"Введите номер дома: ";
  std::cin>>userAdress.house;
  std::cout<<"Введите номер квартиры: ";
  std::cin>>userAdress.flat;
  std::cout<<"Введите индекс: ";
  std::cin>>userAdress.index;
 
   printAdress(userAdress);
   
}
