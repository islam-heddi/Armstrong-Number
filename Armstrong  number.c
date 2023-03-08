#include <stdio.h>

int cdigits(int x){
	int i=1;
	while(x>=10){
		x/=10;
		i++;
	}
	return i;
}

int pow(int x,int i){
	int p=1;
	for(int g=1;g<=i;g++){
		p=x*p;
	}
	return p;
}

int isArmstrongNum(int x){
	int tmp=cdigits(x);
	int num=x;
	int sum=0;
	while(x>0){
		sum+=pow((x%10),tmp);
		x/=10;
	}
	if(num==sum){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int number;
	printf("enter a number : ");
	scanf("%d", &number);
	if(isArmstrongNum(number)){
		printf("%d is armstrong number .\n",number);
	}else{
		printf("%d is not armstrong number .\n",number);
	}
	return 0;
}
