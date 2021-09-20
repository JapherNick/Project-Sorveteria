#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int m;
	
	
	printf("\t Ola seja bem vindo a Lanchonete por favor escolha o que deseja! \n");
	
	        printf("\t (1) ...  Sorvete \n");
			printf("\t (2) ... Acai \n");
			printf("\t (3) ... Milkshake \n");
			printf("\t (4) ... Lanches \n");
			
			scanf("%d", &m);
			if(m==1){
				printf("\t Voce Selecionou Sorvete \n");
				 
				 int s;
				 
				 printf("\t Por favor selecione o seu copo: \n");
				 
				 printf("\t (1) ... 150ML \n");
				 printf("\t (2) ... 300ML \n");
				 printf("\t (3) ... 500ML \n");
				 
				 scanf("%d", &s);
				 
				 while((s<1)  || (s>3));
				 switch(s){
				 	case 1:
				 		printf("\t Voce selecionou o copo de 150ML \n");
				 		break;
				 		
				 		case 2:
				 			printf("\t Voce selecionou o copo de 300ML \n");
				 			break;
				 			
				 			case 3:
				 				printf("\t Voce selecionou o copo de 500ML");
				 				break;
				 } 
				 				
				 				int r;
				 				
				 				printf("\t Por favor selecione o sabor: \n");
				 				
				 				printf("\t (1) ... Flocos \n)");
				 				printf("\t (2) ... Chocolate \n)");
				 				printf("\t (3) ... Morango \n)");
				 				printf("\t (4) ... Chiclete \n)");
				 				printf("\t (5) ... Leite condesado \n)");
				 				
				 				scanf("%d", &r);
				 				
				 				while((r<1) || (r>5));
				 				
				 				switch(r){
				 					case 1:
				 						printf("\t Voce selecionou Flocos \n");
				 						break;
				 						
				 						case 2:
				 							printf("\t Voce selecionou Chocolate \n");
				 							break;
				 							
				 							case 3:
				 								printf("\t Voce Selecionou Morango \n");
				 								break;
				 								
				 								case 4:
				 									printf("\t Voce Selecionou Chiclete \n");
				 									break;
				 									
				 									case 5:
				 										printf("\t Voce Selecionou Leite Condesado \n");
				 										break;
				 										
				 										
								 } int c;
								 
								 printf("\t Por favor Selecione a calda: \n");
			
			printf("\t (1) ... Chocolate \n");
			printf("\t (2) ... Caramelo \n");
			printf("\t (3) ... Morango \n");
			printf("\t (4) ... Leite Condesado \n");
			printf("\t (5) ... Doce De leite \n");
			printf("\t (6) ... Nenhuma \n");
			
			scanf("%d", &c);
			
			while((c<1)  || (c>6));
			
			
			switch(c){
				case 1:
				printf("\t Voce escolheu Chocolate");
				break;
				
				case 2:
					printf("\t Voce escolheu Caramelo");
					break;
					
					case 3:
						printf("\t Voce escolheu morgango");
						break;
						
						case 4:
				             printf("\t Voce escolheu Leite Condesado");
				             break;
				            
				             case 5:
				             	printf("\t Voce escolheu Doce De leite \n");
				             	break;
				             	
				             	      case 6:
				             	         printf("\t Voce escolheu Nenhuma \n");
				             	        break;
			} int a;
			
			printf("\t Gostaria de um adiconal? \n");
			
			    printf("\n (1) ... Nao \n");
				printf("\n (2) ... Granulado \n");
				printf("\n (3) ... Discos de Chocolate \n");
				printf("\n (4) ... Leite Ninho \n");
				
				scanf("%d", &a);
				
				while((a<1) || (a>4));
			
			switch(a){
				case 1:
					printf("\t Voce Selecionou Nao \n");
					break;
					
					case 2:
						printf("\t Voce Selecionou Granulado \n");
						break;
						
						case 3:
							printf("\t Voce Selecionou Discos de Chocolate \n");
							break;
							
							case 4:
								printf("\t Voce Selecionou Leite Ninho \n");
								break;
						
			} 
								
								int p;
								
								printf("\n Escolha a forma de pagamento \n");
			
			printf("\t (1) Dinheiro \n");
			printf("\t (2) Cartao \n");
			
			scanf("%d", &p);
			
			while((p<1) || (p>2));
			
			switch(p){
				case 1:
					printf("\t Voce Selecionou Dinheiro, retire sua senha e aguarde, agradecemos a preferencia \n");
					break;
					
					case 2:
						printf("\t Voce selecionou Cartao, retire sua senha e aguarde, agradecemos a preferencia \n");
						break;
											 
								 
			}
			}if(m==2){
				printf("\t Voce Selecionou Acai \n");
				
				int q;
				 
				 printf("\t Por favor selecione o seu copo: \n");
				 
				 printf("\t (1) ... 150ML \n");
				 printf("\t (2) ... 300ML \n");
				 printf("\t (3) ... 500ML \n");
				 
				 scanf("%d", &q);
				 
				 while((q<1) || (q>3));
				 
				 switch(q){
				 	case 1:
				 		printf("\t Voce selecionou o copo de 150ML \n");
				 		break;
				 		
				 		case 2:
				 			printf("\t Voce selecionou o copo de 300ML \n");
				 			break;
				 			
				 			case 3:
				 				printf("\t Voce selecionou o copo de 500ML");
				 				break;
				 } int w;
				 
				 printf("\t Gostaria de um adiconal? \n");
			
			    printf("\n (1) ... Nao \n");
				printf("\n (2) ... Granola \n");
				printf("\n (3) ... Discos de Chocolate \n");
				printf("\n (4) ... Leite Ninho \n");
				printf("\n (5) ... Morango \n");
				printf("\n (6) ... Banana \n");
				printf("\n (7) ... Nutella \n");
				printf("\n (8) ... Gotas de Chocolate \n");
				printf("\n (9) ... Pacoca \n");
				printf("\n (10) ... Leite Condesado \n");
				
				scanf("%d", &w);
				
				while((w<1) || (w>10));
				
				switch(w){
					case 1:
						printf("\t Voce Selecionou Nao \n");
						break;
						
						case 2:
						printf("\t Voce Selecionou Granola \n");
						break;
						
						case 3:
							printf("\t Voce Selecionou Discos de Chocolate \n");
							break;
							
							case 4:
								printf("\t Voce Selecionou Leite Ninho \n");
								break;
								
								case 5:
									printf("\t Voce Selecionou Morango \n");
									break;
									
									case 6:
										printf("\t Voce Selecionou Banana \n");
										break;
										
										case 7:
											printf("\t Voce Selecionou Nutella \n");
											break;
											
											case 8:
												printf("\t Voce Selecionou Gotas de Chocolate \n");
												break;
												
												case 9:
													printf("\t Voce Selecionou Pacoca \n");
													break;
													
													case 10:
														printf("\t Voce Selecionou Leite Condesado \n");
														break;
				}
				 int u;
				 
				 printf("\t Gostaria de um adiconal? \n");
			
			    printf("\n (1) ... Nao \n");
				printf("\n (2) ... Granola \n");
				printf("\n (3) ... Discos de Chocolate \n");
				printf("\n (4) ... Leite Ninho \n");
				printf("\n (5) ... Morango \n");
				printf("\n (6) ... Banana \n");
				printf("\n (7) ... Nutella \n");
				printf("\n (8) ... Gotas de Chocolate \n");
				printf("\n (9) ... Pacoca \n");
				printf("\n (10) ... Leite Condesado \n");
				
				scanf("%d", &u);
				
				while((u<1) || (u>10));
				
				switch(u){
					case 1:
						printf("\t Voce Selecionou Nao \n");
						break;
						
						case 2:
						printf("\t Voce Selecionou Granola \n");
						break;
						
						case 3:
							printf("\t Voce Selecionou Discos de Chocolate \n");
							break;
							
							case 4:
								printf("\t Voce Selecionou Leite Ninho \n");
								break;
								
								case 5:
									printf("\t Voce Selecionou Morango \n");
									break;
									
									case 6:
										printf("\t Voce Selecionou Banana \n");
										break;
										
										case 7:
											printf("\t Voce Selecionou Nutella \n");
											break;
											
											case 8:
												printf("\t Voce Selecionou Gotas de Chocolate \n");
												break;
												
												case 9:
													printf("\t Voce Selecionou Pacoca \n");
													break;
													
													case 10:
														printf("\t Voce Selecionou Leite Condesado \n");
														break;
				}	
				 int x;
				 
				 printf("\t Gostaria de um adiconal? \n");
			
			    printf("\n (1) ... Nao \n");
				printf("\n (2) ... Granola \n");
				printf("\n (3) ... Discos de Chocolate \n");
				printf("\n (4) ... Leite Ninho \n");
				printf("\n (5) ... Morango \n");
				printf("\n (6) ... Banana \n");
				printf("\n (7) ... Nutella \n");
				printf("\n (8) ... Gotas de Chocolate \n");
				printf("\n (9) ... Pacoca \n");
				printf("\n (10) ... Leite Condesado \n");
				
				scanf("%d", &x);
				
				while((x<1) || (x>10));
				
				switch(x){
					case 1:
						printf("\t Voce Selecionou Nao \n");
						break;
						
						case 2:
						printf("\t Voce Selecionou Granola \n");
						break;
						
						case 3:
							printf("\t Voce Selecionou Discos de Chocolate \n");
							break;
							
							case 4:
								printf("\t Voce Selecionou Leite Ninho \n");
								break;
								
								case 5:
									printf("\t Voce Selecionou Morango \n");
									break;
									
									case 6:
										printf("\t Voce Selecionou Banana \n");
										break;
										
										case 7:
											printf("\t Voce Selecionou Nutella \n");
											break;
											
											case 8:
												printf("\t Voce Selecionou Gotas de Chocolate \n");
												break;
												
												case 9:
													printf("\t Voce Selecionou Pacoca \n");
													break;
													
													case 10:
														printf("\t Voce Selecionou Leite Condesado \n");
														break;
				}
					 int v;
								 
								 printf("\t Por favor Selecione a calda: \n");
			
			printf("\t (1) ... Chocolate \n");
			printf("\t (2) ... Caramelo \n");
			printf("\t (3) ... Morango \n");
			printf("\t (4) ... Leite Condesado \n");
			printf("\t (5) ... Doce De leite \n");
			printf("\t (6) ... Nenhuma \n");
			
			scanf("%d", &v);
			
			while((v<1)  || (v>6));
			
			
			switch(v){
				case 1:
				printf("\t Voce escolheu Chocolate");
				break;
				
				case 2:
					printf("\t Voce escolheu Caramelo");
					break;
					
					case 3:
						printf("\t Voce escolheu morgango");
						break;
						
						case 4:
				             printf("\t Voce escolheu Leite Condesado");
				             break;
				            
				             case 5:
				             	printf("\t Voce escolheu Doce De leite \n");
				             	break;
				             	
				             	      case 6:
				             	         printf("\t Voce escolheu Nenhuma \n");
				             	        break;
			} 
				int e;
				
				printf("\t Por favor Selecione o meio de pagamento: \n");
				
				printf("\t (1) ... Dinheiro \n");
				printf("\t (2) ... Cartao \n");
				
				scanf("%d", &e);
				
				while((e<1)  || (e>2));
				
				switch(e){
					case 1:
						printf("\t Voce Selecionou Dinheiro, retire sua senha e aguarde, agradecemos a preferencia! \n");
						break;
						
						case 2:
							printf("\t Voce Selecionou Cartao, retire sua senha e aguarde, agradecemos a prederencia! \n");
							break;
				}		
								
			}
				if(m==3){
					
				int n;
			
								
				printf("\t Voce Selecionou Milkshake");
				
							
				printf("\t Por favor selecione o tamanho do copo: \n");
				
			     printf("\t (1) ... 150ML \n");
				 printf("\t (2) ... 300ML \n");
				 printf("\t (3) ... 500ML \n");
				
				scanf("%d", &n);
				
				while((n<1)  || (n>3));
				
				switch(n){
					case 1:
						printf("\t Voce Selecionou o copo de: 150ML \n");
						break;
						
						case 2:
							printf("\t Voce selecionou o copo de: 300ML \n");
							break;
							
							case 3:
								printf("\t Voce selecionou o copo de: 500ML \n");
								break;
								
				} int t;
				
				printf("\t Por favor Selecione o sabor: \n");
				
				printf("\t (1) ... Ovomaltine \n");
				printf("\t (2) ... Leite Condesado \n");
				printf("\t (3) ... Frutas Vermelhas \n");
				
				scanf("%d", &t);
				
				while((t<1) || (t>3));
				
				switch(t){
					case 1:
						printf("\t Voce Selecionou: Ovomaltine \n");
						break;
						
						case 2:
							printf("\t Voce Selecionou: Leite Condesado \n");
							break;
							
							case 3:
								printf("\t Voce Selecionou: Frutas Vermelhas \n");
								break;
				} int y;
				
				printf("\t Por favor, selecione o meio de pagamento \n");
				
				printf("\t (1) ... Dinheiro \n");
				printf("\t (2) ... Cartao \n");
				
				scanf("%d", &y);
				
				while((y<1)  || (y>2));
				
				switch(y){
					case 1:
						printf("\t Voce Selecionou Dinheiro, retire sua senha e aguarde, agradecemos a preferencia! \n");
						break;
						
						case 2:
							printf("\t Voce Selecionou Cartao, retire sua senha e aguarde, agradecemos a prederencia! \n");
							break;
						}
				}
				
				if(m==4){
					printf("\t Voce Selecionou: Lanche \n");
				
				int l;
				
				
					printf("\t Selecione seu lanche \n");
					
					printf("\t (1) ... Hot Dog \n");
					printf("\t (2) ... Misto Quente \n");
					printf("\t (3) ... Coxinha \n");
					printf("\t (4) ... Panqueca \n");
					
					scanf("%d", &l);
					
					while((l<1) || (l>4));
					
					switch(l){
											case 1:
							printf("\t Voce Selecionou Hot Dog \n");
							break;
							
							case 2:
								printf("\t Voce Selecionou Misto Quente \n");
								break;
								
								case 3:
									printf("\t Voce Selecionou Coxinha \n");
									break;
									
									case 4: 
									printf("\t Voce Selecionou Panqueca \n");
									break;
							}
							
							int b;
							
							printf("\t Por favor, selecione sua bebida: \n");
							
							printf("\t (1) ... Suco De Laranja Copo de 500ML \n");
							printf("\t (2) ... Coca Cola Lata 350ML \n");
							printf("\t (3) ... Guarana Antartica Lata 350ML \n");
							printf("\t (4) ... Fanta Laranja Lata 350ML \n");
							printf("\t (5) ... Sprite Lata 350ML \n");
							
							scanf("%d", &b);
							
							while((b<1)  || (b>5));
							
							switch(b){
								case 1:
									printf("\t Voce Selecionou Suco de Laranja Copo 500ML \n");
									break;
									
									case 2:
										printf("\t Voce Selecionou Coca Cola Lata 350ML \n");
										break;
										
										case 3:
											printf("\t Voce Selecionou Guarana Antartica Lata 350ML \n");
											break;
											
											case 4:
												printf("\t Voce Selecionou Fanta Laranja Lata 350ML \n");
												break;
												
												case 5:
													printf("\t Voce Selecionou Sprite Lata 350ML \n");
													break;
							}
							
							int k;
							
							printf("\t Por favor, selecione o meio de pagamento \n");
				
				printf("\t (1) ... Dinheiro \n");
				printf("\t (2) ... Cartao \n");
				
				scanf("%d", &k);
				
				while((k<1) || (k>2));
				
				switch(k){
					case 1:
						printf("\t Voce Selecionou Dinheiro, retire sua senha e aguarde, agradecemos a preferencia! \n");
						break;
						
						case 2:
							printf("\t Voce Selecionou Cartao, retire sua senha e aguarde, agradecemos a preferencia! \n");
							break;
				}
							
							
							
					
					
				}				
				
				
	return 0;
}
