#include <stdio.h>
#include <stdlib.h>

int hailstoneSequenceOf(int myNum);


int main() {
	int myNum;

	printf("Enter a number here: ");
	scanf("%d", &myNum);
	hailstoneSequenceOf(myNum);
	return 0;

}

int hailstoneSequenceOf(int myNum){
	printf("%d ", myNum);
	while(myNum != 1) {
		if (myNum % 2 == 0) {
			myNum /= 2;
		} else {
			myNum = myNum*3 + 1;
		}
		printf("%d ", myNum);
	}
}
