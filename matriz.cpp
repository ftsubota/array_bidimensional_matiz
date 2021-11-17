#include<iostream>

int main(){
	int matriz[3][4];
	
	matriz[0][0]= 0;
	matriz[0][1]= 1;
	matriz[0][2]= 2;
	matriz[0][3]= 3;
	
	matriz[1][0]= 4;
	matriz[1][1]= 5;
	matriz[1][2]= 6;
	matriz[1][3]= 7;
	
	matriz[2][0]= 8;
	matriz[2][1]= 9;
	matriz[2][2]= 10;
	matriz[2][3]= 11;
	
	for(int l=0; l<3; l++){
		for(int c=0; c<4; c++){
			std::cout << matriz[l][c] << "|";
		}
		std::cout << "\n";
	}
	
	
	
	return 0;
}
