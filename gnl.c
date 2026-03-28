#include <stdio.h>
#include <stdlib.h>

int main(void);
char *gnl(void);
int main(){
    char *p1, *p2;
    p1=gnl();
    p2=gnl();
    printf(
        "'%s'\n"
        "'%s'\n",
        p1, p2
    );
    free(p2);
    free(p1);
    return 0;

}