//
//  Patient.hpp
//  class Hospital
//
//  Created by Павел on 12.01.2023.
//

#ifndef Patient_hpp
#define Patient_hpp
#include <iostream>
#include <string>
#include <map>
#include <stdio.h>

class Hospital{
public:
    Hospital();
    
    void addPatient(const std::string &name);
    void removePatient(int key);
    void printAllPatients();
    void sendForProcedure ( int key);
    void removeProcedure(int key);
    void printAllProcedure();
    
    
private:
    
    std::map <int, std::string> _patients;
    std::map <int, int> _procedures;
    int _idCounter;
    int _procedurCounter;
   
};

#endif /* Patient_hpp */
