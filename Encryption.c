#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* encrypt(char*,int,int);
char* decrypt(char*,int,int);

int main() {
	char plaintext[50];
	char * c, *g;
	int e = 7;
	int d = 223;
	int n = 11*13;
	
	int ctr;
	int ctt;
	
	scanf("%s", &plaintext);
	plaintext[strlen(plaintext)] = '\0';
	
	c=encrypt(plaintext,e,n);
	
	ctt=strlen(c);
	
	
	for(ctr=0;ctr<ctt;ctr++){
		printf("%c", c[ctr]);
	}
	
	g=decrypt(c,d,n);
	
	ctt=strlen(g);
	
	for(ctr=0;ctr<ctt;ctr++){
		printf("%c", g[ctr]);
	}
	
	return 0;
}

char * encrypt(char * c, int e, int n){
	long double temp;
	int x;
	char * cj = (char *) malloc(strlen(c));
	
	for(x = 0; c[x]!='\0'; x++){
		temp = pow(c[x], e);
		temp = fmod(temp, n);
		cj[x] = temp;
		printf("%c", cj[x]);
	}
	
	cj[strlen(cj)]='\0';
	return  cj;
}


char * decrypt(char * c, int d, int n){
	long double temp;
	int x;
	char * cx = (char *) malloc(strlen(c));
	
	for(x = 0; c[x]!='\0'; x++){
		temp = pow(c[x], d);
		temp = fmod(temp, n);
		cx[x] = temp;
		printf("%c ", cx[x]);
	}
	
	cx[strlen(cx)]='\0';
	return  cx;
}



