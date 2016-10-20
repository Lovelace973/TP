#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3
/* fonction pour afficher la grille modifier */
void grille(char mat[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat[i][j]='u';
			printf("%c ",mat[i][j]);
		}
	}
}

/* fonction pour que le joueur un joue*/
void joueur_un(int x, int y){
	char mat[N][N];
	int i,j;
	grille(mat);
	printf("\nJ1 Entrez la coordonne x :");
	scanf("%i",&x);
	printf("\nJ1 Entrez la coordonne y :");
	scanf("%i",&y);
	mat[x][y]='x';
	
}
/* fonction pour que le joueur deux joue*/
void joueur_deux(int x, int y){
	char mat[N][N];
	grille(mat);
	printf("J2 Entrez la coordonne x :");
	scanf("%i",&x);
	printf("\nJ2 Entrez la coordonne y :");
	scanf("%i",&y);
	mat[x][y]='o';
	
}
/*test si le j1 a gagner*/
int victoire_j1(char mat[N][N]){
	int x;
	int o;
	if(i+1<N){
		if(mat[i+1][j]=='x'){
			x++;
		}
		if(j+1<N){
			if(mat[i+1][j+1]=='x'){
				x++;
			}
		}
		if(j-1<N){
			if(mat[i+1][j-1]=='x'){
				x++;
			}
		}
	if(i-1<N){
		if(mat[i-1][j]=='x'){
			x++;
		}
		if(j+1<N){
			if(j+1<N){
				if(mat[i-1][j+1]=='x'){
					x++;
				}
			}
		}
		if(i-1<N){
			if(i-1<N){
				if(mat[i-1][j-1]=='x'){
				x++;
				}
			}
		}
	

	if(j+1<N){
		if(mat[i][j+1]=='x'){
			x++;
		}
	}
	if(j-1<N){
		if(mat[i][j-1]=='x'){
			x++;
		}
	}
	return x;
}
int victoire_j2(char mat[N][N]){
	int o;
	if(i+1<N){
		if(mat[i+1][j]=='o'){
			o++;
		}
		if(j+1<N){
			if(mat[i+1][j+1]=='o'){
				o++;
			}
		}
		if(j-1<N){
			if(mat[i+1][j-1]=='o'){
				o++;
			}
		}
	if(i-1<N){
		if(mat[i-1][j]=='o'){
			o++;
		}
		if(j+1<N){
			if(j+1<N){
				if(mat[i-1][j+1]=='o'){
					o++;
				}
			}
		}
		if(i-1<N){
			if(i-1<N){
				if(mat[i-1][j-1]=='o'){
				o++;
				}
			}
		}
	

	if(j+1<N){
		if(mat[i][j+1]=='o'){
			o++;
		}
	}
	if(j-1<N){
		if(mat[i][j-1]=='o'){
			o++;
		}
	}
	return o;
}
int main(){
	
	char mat[N][N];
	int x,y;
	int i,j;
	int victory1=victoire_j1(mat);
	int victory2=victoire_j2(mat);
	joueur_un(x,y);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%c",mat[i][j]);
		}
	}

	
}
	
