#include <stdio.h>
void someFunc(){}
/*First comment*/
int main(void){/*Second comment*/someFunc();char *c="#include <stdio.h>%1$cvoid someFunc(){}%1$c/*First comment*/%1$cint main(void){/*Second comment*/someFunc();char *c=%2$c%3$s%2$c;printf(c,10,34,c);return 0;}%1$c";printf(c,10,34,c);return 0;}
