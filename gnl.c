#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 2048
char *zero(char*);
int main(void);
char *zero(char *p){
    unsigned int n;
    for(n=0; n<BUFSIZE; n++){
        *(p + n) = 0;
    }

    return (char *)p;
}
char *gnl(void){
    char *p, *s;
    int r;
    unsigned int n;
    n=0;
    s = p = malloc(BUFSIZE);
    zero(&s);
    //read system call one at a time
    while(1){
        r = read(0, p, 1);
        if(r<1){
            if(n<1){
                return 0;
            }
            else{
                return s;
            }
        }
        else if (n>(BUFSIZE-2)) {
            return s;
        }
    }






}
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