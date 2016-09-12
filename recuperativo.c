#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	int i,j,n,acum,aux,dig;
	char cad[300];
	float porcvoc;
	printf("numeros de pruebas\n ");
	scanf("%i",&n);
 for(j=0;j<n;j++){
	printf("palabras\n");
	fflush(stdin);
	gets(cad);
	aux=0;
	acum=0;
	for(i=0;i<strlen(cad);i++)
	{
		if(cad[i]==' ')
		{
			aux=aux+1;
			if(cad[i-2]==cad[i+1]&&cad[i-1]==cad[i+2]){
				acum=acum+1;
			}else{
				acum=acum-1;
				
		    } 
		    
		}
		/*if(acum==aux){
			printf("SI");
		}else{
			printf("NO");
		}*/
	}
		if(aux==acum){
			printf("SI\n");
		}else{
			printf("NO\n");
		}
	
  /*    if(acum==0){
		printf("NO");
	}else{
		printf("SI");
	}
	acum=0;*/
 }
 	/*if(acum==0){
		printf("NO");
	}else{
		printf("SI");
	}*/
	system("PAUSE");
	return 0;
}
