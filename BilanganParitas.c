#include <stdio.h>

void CekInteger(int x){
	
	if(x%2==0&&x>0){
		printf("POSITIF-GENAP\n");
	}
	else if(x%2==1&&x>0){
		printf("POSITIF-GANJIL\n");
	}
	else if(x<0){
		printf("NEGATIF\n");
	}
	else if(x==0){
		printf("NOL\n");
	}
}

int Max(int a, int b, int c){

	if(a>b&&a>c){
		return a;
	}else if(b>c){
		return b;
	}else{
		return c;
	}
}

int Min(int a, int b,int c){

	if(a<b&&a<c){
		return a;
	}else if(b<c){
		return b;
	}else{
		return c;
	}
}

int main (){
	int A, B, C;
	int nilaitengah;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	CekInteger(A);
	CekInteger(B);
	CekInteger(C);
	
	printf("%d\n", Max(A, B, C));
	printf("%d\n", Min(A, B, C));
	
	nilaitengah = A + B + C - Max(A, B, C) - Min(A, B, C);
	printf("%d\n",nilaitengah);
	
	return 0;
}
