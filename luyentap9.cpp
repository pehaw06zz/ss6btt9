#include<stdio.h>
int main(){
	int so,hangtram,hangchuc,hangdonvi,tong;
	printf("cac so Armstrong co 3 chu so la:");
	for(so=100;so<=999;so++){
	    hangtram= so/100;
	    hangchuc=(so/10)%10;
	    hangdonvi=so%10;
	    so=hangtram*hangtram*hangtram+hangchuc*hangchuc*hangchuc+hangdonvi*hangdonvi*hangdonvi;
	    if(tong=so){
	    	printf("%d.\n",so);
		}
	}
	return 0;
}
