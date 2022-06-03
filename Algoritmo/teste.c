#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

main(){
	//Quantidade de vertices
	int vertice = 6;
	
	//Criando uma matriz
	int matriz[vertice][vertice];
	
	//contador auxiliar
	int aux1;
	int aux2;
	
	//iniciar a matriz
	for(aux1 = 0; aux1 != vertice; aux1++){
		for(aux2 = 0; aux2 != vertice; aux2++){
			matriz[aux1][aux2] = 0;
		}
	}
	
	//Variaveis auxiliares
	int opcao = 1;
	
	//variaveis auxiliares
	int vertUm = 0;
	int vertDois = 0;
	int peso = 0;
	
	//definir os pesos das arestas
	while(opcao == 1){
		printf("\nDeseja definir um peso para uma aresta? \n");
		printf("SIM = Digite 1\n");
		printf("NAO = Digite 0\n\n");
		printf(">>");
		
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("Digite o primeiro vertice >> ");
			scanf("%d", &vertUm);
			
			printf("Digite o vertice destino >> ");
			scanf("%d", &vertDois);
			
			printf("Digite o peso >> ");
			scanf("%d", &peso);
		}
		matriz[vertUm - 1][vertDois - 1] = peso;
	}
	
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	
	//imprimir a matriz
	for(aux1 = 0; aux1 != vertice; aux1++){
		for(aux2 = 0; aux2 != vertice; aux2++){
			printf("%d ", matriz[aux1][aux2]);
		}
		printf("\n");
	}
	
	//Estimativa do caminho mais curto
	int dv = INT_MAX/2;
	
	//Vertice precendendente
	int pv = -1;
	
	//Caminho total
	int du = 0;
	
	//Vertice inicial
	int ds = 0;
	
	//Vetor resultado
	int caminho[vertice];
	
	
	////////////////
	int acumulado;
	
	for(aux1 = 0; aux1 != vertice; aux1++){
		for(aux2 = 0; aux2 != vertice; aux2++){
			if(matriz[aux1][aux2] != 0){
				if(dv > du + matriz[aux1][aux2]){
					du = du + matriz[aux1][aux2];
				}
			}
		}
	}
	
	
	
//	//verificar os caminhos - "relaxamento"
//	for(aux1 = 0; aux1 != vertice; aux1++){
//		for(aux2 = 0; aux2 != vertice; aux2++){
//			if(matriz[aux1][aux2] != 0){
//				if(dv > matriz[aux1][aux2] + du){
//					dv = du + matriz[aux1][aux2];
//					//Indicar o predecessor
//					caminho[aux1] = aux2;
//					printf("--------> %d", aux2);
//				}
//			}
//			du = du + dv;
//		}
//	}
	
	
	
	
	
	
	for(aux1 = 0; aux1 != vertice; aux1++){
		printf("\n\n\n %d ", caminho[aux1]);
	}
	
	
	
}
