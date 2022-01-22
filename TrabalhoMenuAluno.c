#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Elisangela Deodato da Silva ----- 1711334 */


int main(){
	
	int m, i, countA, countB, N, count;											//declaração das variáveis inteiras
	double a, b, c, d, e, f, g, h, j, k, med, Ap, Rep, nota, maior, menor;		//declaração das variáveis reais positivas
	i = 1;
	count = 0;
	countA = 0;
	countB = 0;																	// inicialização das variáveis de controle
	menor = 0;
	maior = 0;

	printf("Digite sua opcao no menu\n");
	printf("Opcao 1: Media Aritmetica de 10 alunos\n");
	printf("Opcao 2: Contador numerico de 1 a N\n");
	printf("Opcao 3: Maior e Menor Nota\n");
	printf("Opcao 4: Fim\n");
	scanf("%d",&m);
	if(m<=0 || m>4){												// controle da variável menu
		printf("Opcao Invalida!!!");
	}
	
	else{															// emtrada nas opções do menu
	
		switch (m){
			
			case 1:													//opção media aritmética de 10 alunos
				printf("Digite a nota1\n");
				scanf("%lf",&a);
				if (a>=6){													
					countA=countA+1;								// contador de alunos aprovados
				}
				else{
					countB=countB+1;								// contador de alunos reprovados
				}
				printf("Digite a nota2\n");
				scanf("%lf",&b);
				if (b>=6){
					countA=countA+1;
				}	
				else{
					countB=countB+1;
				}
		 		printf("Digite a nota3\n");
				scanf("%lf",&c);
				if (c>=6){
					countA=countA+1;
				}
				else{
				countB=countB+1;
				}
				printf("Digite a nota4\n");
				scanf("%lf",&d);
				if (d>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota5\n");
				scanf("%lf",&e);
				if (e>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota6\n");
				scanf("%lf",&f);
				if (f>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota7\n");
				scanf("%lf",&g);
				if (g>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota8\n");
				scanf("%lf",&h);
				if (h>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota9\n");
				scanf("%lf",&j);
				if (j>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				printf("Digite a nota10\n");
				scanf("%lf",&k);
				if (k>=6){
					countA=countA+1;
				}
				else{
					countB=countB+1;
				}
				med = (a+b+c+d+e+f+g+h+j+k)/10;										// cálculo da média aritmética
				printf("A Media da Turma eh: %.2lf\n", med);
				Ap = countA*10;														// percentual de alunos aprovados
				Rep = countB*10;													// percentual de alunos reprovados
				printf("O percentual de Aprovados eh: %.2lf\n", Ap);
				printf("O percentual de Reprovados eh: %.2lf\n", Rep);
			
			break;
			
			case 2:																	// contador de números inteiros
				printf("Digite o valor\n");
				scanf("%d",&N);
				if(N>1){
					while (i>=1 && i<=N){
						printf(" %d ", i);
						i++;
					}
				}
			
			break;
			
			case 3:																// Maior e Menor nota
			
				do{
					printf("Insira a nota: ");
       				scanf("%lf", &nota);
					if (nota > maior)
           				maior = nota;
       				else
           				menor = nota;	
					count++;
				}while(count<10);
				printf("Menor Nota: %.2lf Maior Nota: %.2lf", menor, maior);
			
			break;
		
			case 4:																	// Fim do Programa
				printf("Programa Encerrado!!!!\n");
				
			break;
			
		}
 	}	
		
		
	
	system ("Pause");
	return 0;	
}
