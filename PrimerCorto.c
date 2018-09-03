

#include <stdio.h>
#define tamano 5
int main()
{
	double precio1fila = 5;
	double preciofijo = 3.5;
	double precioult = 2.5;
	int opcion;
	int Matriz[tamano][tamano] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	double ganancias;
	char codigoSilla;
    int numsilla;
	do{
		printf("..........................................................");
		printf("1-Vender Entradas\n");
		printf("2-Ver ganancias\n");
		printf("3-Salir\n");
		printf("..........................................................");
		scanf("%d",&opcion);
		switch (opcion){
			case 1:
				printf("A1 A2 A3 A4 A5\n");
				printf("B1 B2 B3 B4 B5\n");
				printf("C1 C2 C3 C4 C5\n");
				printf("D1 D2 D3 D4 D5\n");
				printf("E1 E2 E3 E4 E5\n");
				printf("Elija el asiento que desea ocupar (para elegir escriba la Letra y el numero por ejemplo: A1)");
				scanf("%c",&codigoSilla);
				scanf("%d",&codigoSilla);
					if(codigoSilla == 'A' && numsilla == 1){
					if(Matriz[0][0]==0){
						Matriz[0][0]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'A' && numsilla == 2){
					if(Matriz[0][1]==0){
						Matriz[0][1]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'A' && numsilla == 3){
					if(Matriz[0][2]==0){
						Matriz[0][2]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'A' && numsilla == 4){
					if(Matriz[0][3]==0){
						Matriz[0][3]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'A' && numsilla == 5){
					if(Matriz[0][4]==0){
						Matriz[0][4]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'B'&& numsilla == 1){
					if(Matriz[1][0]==0){
						Matriz[1][0]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'B'&& numsilla == 2){
					if(Matriz[1][1]==0){
						Matriz[1][1]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'B'&& numsilla == 3){
					if(Matriz[1][2]==0){
						Matriz[1][2]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'B'&& numsilla == 4){
					if(Matriz[1][3]==0){
						Matriz[1][3]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'B'&& numsilla == 5){
					if(Matriz[1][4]==0){
						Matriz[1][4]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'C'&& numsilla == 1){
					if(Matriz[2][0]==0){
						Matriz[2][0]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'C'&& numsilla == 2){
					if(Matriz[2][1]==0){
						Matriz[2][1]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'C'&& numsilla == 3){
					if(Matriz[2][2]==0){
						Matriz[2][2]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'C'&& numsilla == 4){
					if(Matriz[2][3]==0){
						Matriz[2][3]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'C'&& numsilla == 5){
					if(Matriz[2][4]==0){
						Matriz[2][4]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'D'&& numsilla == 1){
					if(Matriz[3][0]==0){
						Matriz[3][0]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'D'&& numsilla == 2){
					if(Matriz[3][1]==0){
						Matriz[3][1]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'D'&& numsilla == 3){
					if(Matriz[3][2]==0){
						Matriz[3][2]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'D'&& numsilla == 4){
					if(Matriz[3][3]==0){
						Matriz[3][3]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'D'&& numsilla == 5){
					if(Matriz[3][4]==0){
						Matriz[3][4]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					}
					if(codigoSilla == 'E'&& numsilla == 1){
					
					if(Matriz[4][0]==0){
						Matriz[4][0]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					
				}
					if(codigoSilla == 'E'&& numsilla == 2){
					
					if(Matriz[4][1]==0){
						Matriz[4][1]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					
				}
					if(codigoSilla == 'E'&& numsilla == 3){
					
					if(Matriz[4][2]==0){
						Matriz[4][2]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					
				}
					if(codigoSilla == 'E' && numsilla == 4){
					
					if(Matriz[4][3]==0){
						Matriz[4][3]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					
				}
					if(codigoSilla== 'E'&& numsilla == 5){
					
					if(Matriz[4][4]==0){
						Matriz[4][4]=1;
						ganancias = ganancias + precio1fila;
						printf("Se guardo su aciento correctamente\n");
						}else{
							printf("El aciento que desea ocupar esta ocupado\n");
							}
					
				}
					
					
			break;
			case 2:
			printf("%b",ganancias);
			break;
			}
		
		}while(opcion>0&&opcion<3);
	return 0;
}

