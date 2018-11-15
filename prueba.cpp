#include <iostream>
#include <conio.h>
using namespace std;

int i,j, k, s, l;
float m1[100][100], coef, aux[1000], elemento;
bool bandera = true;
     
int main()
{
	cout << "Bienvenido al Generador de Matrices Inversas"<<endl;
	cout << "Por favor introduzca el tamaño de la matriz"<<endl;
    cout << "-------------------------------------------" << endl;
    cout << "n= ";
    /* Vamos a introducir la matriz por teclado*/ 
    
	cin >> k;
	cin>>l;
	for (i=0;i<k;i++)
		{
			for (j=0;j<l;j++)
			{
				cout << "Ingrese el valor de ? " "["<<i<<"]""["<<j<<"]";
				cin >> m1[i][j];
			}
		}
	
	for (i=0;i<k;i++)
		{
			for (j=0;j<l;j++)
			{
				cout<<m1[i][j]<<"\t";
			}
			cout<<"\n";
		}
	/***************************/
	
	
	/****************Matriz traspuesta ***********/
	cout<< "la matriz traspuesta es :"<<"\n";
	for (i=0;i<l;i++)
		{
			for (j=0;j<k;j++)
			{
				
				 cout<<m1 [j][i]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\n\n";
		
		cout<<"matriz inversa"<<"\n";
/****************************/
	for (i=0;i<k;i++)
		for(j=k;j<2*l;j++)
		{
			if(i==(j-k))
			{
				m1[i][j]=1;	
			}
				
			else
			{
				m1[i][j]=0;	
			}
				
		}
		//Iteraciones
		for (s=0;s<k;s++)
		{
			elemento=m1[s][s];
			for (j=0;j<2*k;j++)
				m1[s][j]=m1[s][j]/elemento;

			for(i=0;i<l;i++)
			{
				if (i==s)
				{
					
				}	
				else 
				{
					coef= m1[i][s];
					for (j=0;j<2*k;j++)
						aux[j]=m1[s][j]*(coef*-1);
					for (j=0;j<2*k;j++)
						m1[i][j]=m1[i][j]+aux[j];
				}
			}
		}
		//Imprimir la matriz inversa
		
		for (i=0;i<k;i++)
		{
			for(j=k;j<2*k;j++)
			{
				cout <<m1[i][j]<<"\t";
				if (j==k)
				{
					
				}
				
			}
			cout<<"\n";
				
		 }
		 
		 
		 
	/****************************+Decime si es simetrica c ******************/
	 
	 for (i=0;i<k;i++)
		{	
    		for (j=0;j<k;j++)
			{
				if(m1[i][j] != m1[j][i])
				{
					bandera = false;
					
				}
				
    		}
    		cout<<"\n";
 		}

	if(bandera != true)
	{
		cout<<" La matriz es simetrica";
	}
	else
	{
		cout<< "La matriz no es simetrica";
	}
              system("pause");
}
		

