#ifndef FILE_OPS_H__
#define FILE_OPS_H__

#define PATH_RESULT "/opt/0d1n/view/"
#define TABLE "/opt/0d1n/view/tables/output_array.txt"
#define TEMPLATE "/opt/0d1n/templates/template.conf"
#define TEMPLATE2 "/opt/0d1n/templates/hammer1.conf"
#define TEMPLATE3 "/opt/0d1n/templates/hammer2.conf"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

void end_datatable(char * path);
void prepare_datatable(void);
char *readLine(char * NameFile);
int WriteFile(char *file,char *str);
long FileSize(const char *file);
char *Random_linefile(char * namefile);

#endif
