#include <stdio.h>
#include <time.h>


int main(int argc, char**argv[]){

printf("Programmer pour calculer les matrices\n");
int matrix[3][3];
int b[3][3];
/*
printf("elements present dans la matrice: \n");
int elm = 0;
        scanf("%d", &elm);
int matrice_f[elm][elm];
printf("Saisir les valeurs dans la matrice A\n");

for(int i = 0; i < elm;i++){
    for(int j = 0; j < elm; j++){
        scanf("%d", &matrix[i][j]);


    }
}

printf("Saisir les valeurs dans la matrice B\n");

for(int i = 0; i < elm;i++){
    for(int j = 0; j < elm; j++){
        scanf("%d", &b[i][j]);


    }
}

printf("Affichons le resultat\n");

for(int i = 0; i < elm; i++){
    for(int j = 0; j < elm; j++){
        printf("%d\t",matrix[i][j]);
        printf("%d\t\t",b[i][j]);

    }
    printf("\n");
}


for(int i = 0; i < elm; i++){
    for(int j = 0; j < elm; j++){
        matrice_f[i][j] = 0;
        for(int k = 0; k < elm;k++){
            matrice_f[i][j] = matrice_f[i][j] + matrix[i][k] * b[k][j]; 
        }
        
         
    }


    printf("\n");
}


for(int i = 0; i < elm; i++){
    for(int j = 0; j < elm; j++){
      
printf("%d\t",matrice_f[i][j]);           
         
    }
    printf("\n");
}

*/

int n[3][3] = {{1,2},{3,4},{5,6}},m[3][3] = {{0,0},{0,0},{0,0}};

printf("la matrice de base:\n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("%d\t",n[i][j]);
}
printf("\n");
}


printf("calcul de la transposee + temps:\n");
clock_t t; 
t = clock();
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        m[i][j] += n[j][i];
        
}
printf("\n");
}
t = clock() -t;
double time = ((double)t) / (CLOCKS_PER_SEC);
printf("Le temps de la transposee est:%f seconds \n",time);
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf("%d\t",m[i][j]);
}
printf("\n");
}


    return 0;
}






