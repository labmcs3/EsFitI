{
  TGraphErrors *gr = new TGraphErrors("pendolo.dat");
  TF1 *f = new TF1("f","[1]*x+[0]",0,10);
  f->SetParameter(0,4);
  f->SetParameter(1,0);
  gr->Fit("f");
  // Setto Delta(chi2) con gMinuit
  // Costruisco il grafico con il metodo Contour e lo grafico
}
