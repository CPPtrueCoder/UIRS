//
// Created by andie on 09.03.2020.
//
#include <iostream>
#include <vector>
#include <string>

#ifndef UIRS_ET_KOVAR_FUNCSION_H
#define UIRS_ET_KOVAR_FUNCSION_H

class et_kovar_function {
public:
    std::vector<double> getData(std::string dir );
    void plotFunction();
private:
    std::vector <double> data;
};

#endif //UIRS_ET_KOVAR_FUNCSION_H
