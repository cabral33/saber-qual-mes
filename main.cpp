#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");

int dias=0, nm=0;

printf("Esse mes tem quantos dias ? ");
scanf("%d", &dias);

	if(dias==28 || dias==29){
		printf("Mes de Fevereiro");
	}else
		if(dias==30){
		printf("Mas qual � o numero do mes ? ");
		scanf("%d", &nm);							// 'nm' (Nome do Mes)

	switch(nm){
		case 4:
			printf("Mes 4 � Abril, com %d dias", dias);
			break;
		case 6:
			printf("Mes 6 � Junho, com %d dias", dias);
			break;
		case 9:
			printf("Mes 9 � Setembro, com %d dias", dias);
			break;
		case 11:
			printf("Mes 11 � Novembro, com %d dias", dias);
			break;
		default:
			printf("Esse mes n�o existe com %d dias", dias);
			break;
		}
	}else
		if(dias==31){
			printf("Mas qual � o numero do mes ? ");
			scanf("%d", &nm);

	switch(nm){
		case 1:
			printf("Mes 1 � Janeiro, com %d dias", dias);
			break;
		case 3:
			printf("Mes 3 � Mar�o, com %d dias", dias);
			break;
		case 5:
			printf("Mes 5 � Maio, com %d dias", dias);
			break;
		case 7:
			printf("Mes 7 � Julho, com %d dias", dias);
			break;
		case 8:
			printf("Mes 8 � Agosto, com %d dias", dias);
			break;
		case 10:
			printf("Mes 10 � Outubro, com %d dias", dias);
			break;
		case 12:
			printf("Mes 12 � Dezembro, com %d dias", dias);
			break;
		default:
			printf("Esse mes n�o existe com %d dias", dias);
			break;
		}
	}
}
