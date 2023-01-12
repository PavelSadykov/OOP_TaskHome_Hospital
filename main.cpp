//
//  main.cpp
//  class Hospital
//
//  Created by Павел on 05.01.2023.
//
#include "Patient.hpp"
#include <iostream>
#include <string>
#include <map>

int main(int argc, const char * argv[]) {
   
    
   std::map < int, std::string >_patients;
   std::map < int, int > procedures;
   std::map < int, std::string >::iterator it;
    Hospital h;
    std::string name;
    int tmpID=0, key , X, Y=0;
    do{
        std::cout <<std:: endl << "Выберите действие: \n1 - Зарегистрировать пациента \n2 - Направить пациента на процедуры \n3 - Выписать пациента \n4 - Завершение работы \n-->";
        
        std::cin>>X;
        switch (X) {
            case 1:{
                std::cout<<"Регистрация пациента"<<std::endl;
                std::cout<<"Введите имя ";
                std::cin >> name;
                h.addPatient(name);
                std::cout<<"\nСписок пациентов :"<<std::endl;
                std::cout<<"ID:  Имя пациента:"<<std::endl;
                h.printAllPatients();
                    }
                break;
            case 2:{
                int Q=0,tmpID=-1;
                 std::cout<<"Проведение процедур "<<std::endl;
                 std::cout<<"Список пациентов :"<<std::endl;
                h.printAllPatients();
                std::cout<<"Введите Id пациента -->";
                std::cin>>tmpID;
                std::cout<<"Направить  пациента на  процедуру? \n1 - да \n-->";
                std::cin>>Q;
                if(Q==1){
                    h.sendForProcedure (tmpID);
                    std::cout<<"Карта процедур :"<<std::endl;
                    std::cout<<"ID:  Количество процедур:"<<std::endl;
                    h.printAllProcedure();
                }
                std::cout<<"\nОкончить курс процедур и напрваить на выписку?  \n1 - да \n-->";
                Q=0;
                std::cin>>Q;
                if(Q==1){
                    h.removePatient(tmpID);
                    h.removeProcedure(key);
                    std::cout<<"Пациент выписан из медучреждения"<<std::endl;
                    std::cout<<"Список оставшихся пациентов :"<<std::endl;
                    h.printAllPatients();
                }
             }
                break;
                
            case 3:{
                int Q=0, tmpID=-1;;
                std::cout<<"Выписка из медучреждения "<<std::endl;
                std::cout<<"Список пациентов :"<<std::endl;
                h.printAllPatients();
                std::cout<<"Введите Id пациента -->";
                std::cin>>tmpID;
                std::cout<<"Выписать пациента из медучреждения ? \n1 - да \n-->";
                std::cin>>Q;
                if(Q==1){
                    h.removePatient(tmpID);
                std::cout<<"Пациент выписан из медучреждения"<<std::endl;
                std::cout<<"Список оставшихся пациентов :"<<std::endl;
                    h.printAllPatients();
                }
                
            }
                    break;
                
            case 4:
                std::cout<<" Работа завершена "<<std::endl;
                exit(0);
                break;
                
            default:std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
                break;
        }
    }while (Y!=5);
           
    return 0;
}
