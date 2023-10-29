namespace data{
  vector<double>  x, y, ex, ey;
}

double fun(const double *x,const double *par){
  return par[0]*(*x)+par[1];
}

void fcn(int &npar,double *gin,double &f,double *par,int iflag){
  f = 0.0;
  for (int i=0;i<data::x.size();i++){
    // Calcolo del Chi2
  }
}
