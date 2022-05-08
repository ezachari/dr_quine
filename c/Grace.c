#include <stdio.h>
#include <stdlib.h>
#define start main
#define filename "Grace_1"
#define options "w"
/*comment*/
int start(void){FILE *fp;fp=fopen(filename,options);if(fp == NULL){exit(1);}char *c = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#define start main%1$c#define filename %2$c%3$s%2$c%1$c/*comment*/%1$c";if(fprintf(fp,c,10,34,filename,'w',c)<0){fclose(fp);exit(1);}if(fclose(fp)!=0){exit(1);}return 0;}
