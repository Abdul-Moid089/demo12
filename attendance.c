  #include<stdio.h>
#include<math.h>
#include<process.h>
float perc(int abs, int oaa, int lect){
	float percentage;
	percentage = 100-(((float)(abs-oaa)/lect)*100);
	return percentage;
}
int main(){
	int absent,OAA,lectures;
	printf("Enter total number of lectures:");
	scanf("%d",&lectures);
	printf("\nEnter Total number of Absents:");
	scanf("%d",&absent);
	printf("\nEnter Total O.A.A.:");
	scanf("%d",&OAA);
	float c=perc(absent,OAA,lectures);
	
	printf("\nAttendance percentage=%.2f",c);
	if(c<=80){
		printf("\nYou are not allowed to give Class Test");
	}
}
