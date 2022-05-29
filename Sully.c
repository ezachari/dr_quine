#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#define program_name "Sully"
#define options "w"
#define s_filename "%s_%d.c"
#define flags "gcc -Wall -Wextra -Werror"
#define s_command "%s %s_%d.c -o %s_%d"
#define s_exec "./%s_%d"
int main(void) {
	FILE *fp;
	char command[69];
	char exec[69];
	char filename[69];
	int i = 5;
	bzero(&command, sizeof(command));
	bzero(&filename, sizeof(filename));
	bzero(&exec, sizeof(exec));
	sprintf(filename, s_filename, program_name, i);
	char *c="#include <stdio.h>%c$1#include <strings.h>%c#include <stdlib.h>%c#include <unistd.h>%c#define program_name %c%s%c%c#define options %c%s%c%c#define s_filename %c%s%c%c#define flags %c%s%c%c#define s_command %c%s%c%c#define s_exec %c%s%c%cint main(void) {%c	FILE *fp;%c	char command[69];%c	char exec[69];%c	char filename[69];%c	int i = %d;%c	bzero(&command, sizeof(command));%c	bzero(&filename, sizeof(filename));%c	bzero(&exec, sizeof(exec));%c	sprintf(filename, s_filename, program_name, i);%c	char *c=%c%s%c;%c	fp = fopen(filename, options);%c	if (fp == NULL) {%c		exit(1);%c	}%c	if (fprintf(fp, c, 10, 10, 10, 10, 34, program_name, 34, 10, 34, options, 34, 10, 34, s_filename, 34, 10, 34, flags, 34, 10, 34, s_command, 34, 10, 34, s_exec, 34, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10) < 0) {%c		fclose(fp);%c		exit(1);%c	}%c	sprintf(command, s_command, flags, program_name, i, program_name, i);%c	system(command);%c	if (i) {%c		sprintf(exec, s_exec, program_name, i);%c		system(exec);%c	}%c	return 0;%c}%c";
	fp = fopen(filename, options);
	if (fp == NULL) {
		exit(1);
	}
	if (fprintf(fp, c, 10, 10, 10, 10, 34, program_name, 34, 10, 34, options, 34, 10, 34, s_filename, 34, 10, 34, flags, 34, 10, 34, s_command, 34, 10, 34, s_exec, 34, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 34, c, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10) < 0) {
		fclose(fp);
		exit(1);
	}
	if(fclose(fp) != 0) {
		exit(1);
	}
	sprintf(command, s_command, flags, program_name, i, program_name, i);
	system(command);
	if (i) {
		sprintf(exec, s_exec, program_name, i);
		system(exec);
	}
	return 0;
}
