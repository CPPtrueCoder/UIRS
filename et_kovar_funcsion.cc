//
// Created by andie on 09.03.2020.
//

#include "et_kovar_funcsion.h"
#include <fstream>
#include <cmath>
#include <mgl2/mgl.h>
void
et_kovar_function::plotFunction() {
    const double npoints = 200;
    const double step = 4 * M_PI / npoints;
    this->data=getData("C:\\Users\\andie\\CLionProjects\\UIRS\\cmake-build-debug"
                       "\\ff_kov.txt");
    FILE *pipe = _popen("B:/gnuplot/bin/gnuplot.exe", "w");
    if (pipe != nullptr) {
        fprintf(pipe, "set term win\n");

        fprintf(pipe, "plot '-' with lines\n");
        for (int i = 0; i < data.size(); i++){
            double x = -2 * M_PI + i * step;
            fprintf(pipe, "%lf %lf\n", data,
                   x);
        fprintf(pipe, "%s\n", "e");

        fflush(pipe);}
    } else
        puts("Could not open the file\n");
    system("pause");
    if (pipe)
        _pclose(pipe);

    system("pause");

}

std::vector<double>
et_kovar_function::getData(std::string dir) {
    std::vector<double> data;
    std::string line;
    std::ifstream in(dir); // окрываем файл для чтения
    if (in.is_open())
    {   std::cout<<"Success";
        while (getline(in, line))
        {
            std::cout << line << std::endl;

            data.push_back(std::stod(line));
        }
    }else{
        std::cout<<"Bad work";
    }

    in.close();
    return std::vector<double>(data);
}

