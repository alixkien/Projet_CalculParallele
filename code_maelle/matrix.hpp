#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

void Matrix(std::vector<int> &row,std::vector<int> &col,std::vector<double> &value,int Nx, int Ny, int Nu, int Nv, double Lx, double Ly, double D, double dt, double alpha, double beta, int me);
void secondMembre_seq(std::vector<double> &S,std::vector<double> U, std::vector<double> V, int Nx, int Ny, double dt,double t, double Lx, double Ly, double D, int mode, double alpha, double beta, int h, int me);

#endif // _MATRIX_HPP_
