from   ROOT    import *
from   numpy   import *
from   ctypes  import *

#... chi2 ...
def func(x,a,b):
    return a*x+b

def fcn(npar, gin, f, par,iflag):
    ## costruisco il chi2

# Acquisizione dati
x,y,ex,ey = loadtxt('pendolo.dat',usecols=(0,1,2,3),unpack=True)

# Minuit
minuit = TMinuit(2)
minuit.SetFCN(fcn);
minuit.DefineParameter(0,'par0',4,0.01,0.,0.)
minuit.DefineParameter(1,'par1',0,0.01,0.,0.)
minuit.Command("MIGRAD")

## Estraggo i risultati
