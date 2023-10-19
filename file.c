#include <stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    printf("Enter your file name \t");
    scanf("%s",filename);
    fp = fopen(filename,"w");
    fprintf(fp,"This is a file created by my program \n");
    fprintf(fp,"I am so happy");
    fprintf(fp,"Secondline");
    fclose(fp);
    return 0;
}
