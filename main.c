#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int input;
    printf("Enter the distance of this object from the sun (in the AU unit) : ");
    scanf("%d", &input);
    int result = sqrt(input * input * input);
	printf("This object would take %d years to orbit the sun.\n", result);
    system("pause");
	return 0;
}