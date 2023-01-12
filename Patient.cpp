//
//  Patient.cpp
//  class Hospital
//
//  Created by Павел on 12.01.2023.
//

#include "Patient.hpp"
#include <iostream>

Hospital::Hospital(): _idCounter(0),  _procedurCounter(1){};
   
void Hospital::addPatient(const std::string &name){
    _patients.insert({_idCounter, name});
    _idCounter++;
}
void Hospital::removePatient(int key){
    _patients.erase(key);
}
void Hospital::printAllPatients(){
    for(const auto &[key, value]   :   _patients){
        std::cout << key << "    "<< value<<"\n";
    }}
void Hospital:: sendForProcedure ( int key){
    _procedurCounter=key;
    _procedures[_procedurCounter]++;
    _procedures.insert({_procedurCounter, key});
  
}
 void Hospital::removeProcedure(int key){
    _procedures.erase(key);
}
void Hospital::printAllProcedure(){
    for(const auto &[id, value] : _procedures){
        std::cout << id << "    "<< value<<"\n";
    }}

    


