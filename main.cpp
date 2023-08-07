#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define   TAMANIO   10
using namespace std;
int main()
{
	 float a[TAMANIO][TAMANIO], x[TAMANIO], ratio;
	 int i,j,k,n=3;

     /* precicion de decimales. */
     cout<< setprecision(6)<< fixed;
   /* 2. Lee argumaneto de matriz */
	 cout<<"Coeeficienntes de la matriz: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>a[i][j];
		  }
		  cout<<endl;
	 }
    /* Aplica eliminacion de gauss */
     for(i=1;i<=n;i++)
     {
          if(a[i][i] == 0.0)
          {
               cout<<"Error!";
               exit(0);
          }
          for(j=1;j<=n;j++)
          {
               if(i!=j)
               {
                    ratio = a[j][i]/a[i][i];
                    for(k=1;k<=n+1;k++)
                    {
                        a[j][k] = a[j][k] - ratio*a[i][k];
                    }
               }
          }
     }
     /* Obtiene solucion */
     for(i=1;i<=n;i++)
     {
        x[i] = a[i][n+1]/a[i][i];
     }

	 /* mostrar Solution */
	 cout<< endl<<"Solucion: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;
	 }

	 return(0);
}
