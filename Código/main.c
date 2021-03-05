#include <stdio.h>
int main(){
	int cad1=0,cad2=0,cad3=0,cad4=0,cad5=0;
	FILE *arquivo;
	int carregar[100];
    	int i=0;
    	int maior,menor,cod,aux;

    	arquivo = fopen("votos.txt","r");

    	if(arquivo == NULL){
        	printf("Falha ao abrir o arquivo");
        	return 0;
    	}

    	while(!feof(arquivo)){
    		fscanf(arquivo,"%d",&carregar[i]);
    		i++;
    	}

    	for(i=0;i<100;i++){
    		printf("%d ",carregar[i]);
	}

    	for(i=0;i<100;i++){
        	if(carregar[i]==1){
            	cad1 ++;
        	}else if(carregar[i]==2){
            		cad2 ++;
        	}else if(carregar[i]==3){
            		cad3 ++;
        	}else if(carregar[i]==4){
            		cad4 ++;
        	}else if(carregar[i]==5){
            		cad5 ++;
        	}
    	}

    	if(cad1>cad2&&cad1>cad3&&cad1>cad4&&cad1>cad5){
            	maior = cad1;
            	cod = 1;
    	}else if(cad2>cad1&&cad2>cad3&&cad2>cad4&&cad2>cad5){
            	maior = cad2;
            	cod = 2;
    	}else if(cad3>cad1&&cad3>cad2&&cad3>cad4&&cad3>cad5){
            	maior = cad3;
            	cod = 3;
    	}else if(cad4>cad1&&cad4>cad2&&cad4>cad3&&cad4>cad5){
            	maior = cad4;
            	cod = 4;
    	}else if(cad5>cad1&&cad5>cad2&&cad5>cad3&&cad5>cad4){
            	maior = cad5;
            	cod = 5;
    	}
    	if(cad1<cad2&&cad1<cad3&&cad1<cad4&&cad1<cad5){
            	menor = cad1;
            	aux = 1;
    	}else if(cad2<cad1&&cad2<cad3&&cad2<cad4&&cad2<cad5){
            	menor = cad2;
            	aux = 2;
    	}else if(cad3<cad1&&cad3<cad2&&cad3<cad4&&cad3<cad5){
            	menor = cad3;
            	aux = 3;
    	}else if(cad4<cad1&&cad4<cad2&&cad4<cad3&&cad4<cad5){
            	menor = cad4;
            	aux = 4;
    	}else if(cad5<cad1&&cad5<cad2&&cad5<cad3&&cad5<cad4){
            	menor = cad5;
            	aux = 5;
    	}
   	printf("Codigo do candidado com maior numero de votos: %d Numero de votos: %d\n",cod,maior);
   	printf("Codigo do candidado com menor numero de votos: %d Numero de votos: %d\n",aux,menor);

   	fclose(arquivo);
   	return 0;
}
