#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Elisangela Deodato da Silva ----- 1711334 */


int main(){
	
	int m, i, countA, countB, N, count;											//declara��o das vari�veis inteiras
	double a, b, c, d, e, f, g, h, j, k, med, Ap, Rep, nota, maior, menor;		//declara��o das vari�veis reais positivas
	i = 1;
	count = 0;
	countA = 0;
	countB = 0;																	// inicializa��o das vari�veis de controle
	menor = 0;
	maior = 0;

	printf("Digite sua opcao no menu\n");
	printf("Opcao 1: Media Aritmetica de 10 alunos\n");
	printf("Opcao 2: Contador numerico de 1 a N\n");
	printf("Opcao 3: Maior e Menor Nota\n");
	printf("Opcao 4: Fim\n");
	scanf("%d",&m);
	if(m<=0 || m>4){												// controle da vari�vel menu
		printf("Opcao Invalida!!!");
	}
	
	else{															// emtrada nas op��es do menu
	
		switch (m){
			
			case 1:													//op��o media aritm�tica de 10 alunos
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
				med = (a+b+c+d+e+f+g+h+j+k)/10;										// c�lculo da m�dia aritm�tica
				printf("A Media da Turma eh: %.2lf\n", med);
				Ap = countA*10;														// percentual de alunos aprovados
				Rep = countB*10;													// percentual de alunos reprovados
				printf("O percentual de Aprovados eh: %.2lf\n", Ap);
				printf("O percentual de Reprovados eh: %.2lf\n", Rep);
			
			break;
			
			case 2:																	// contador de n�meros inteiros
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
