#ifndef GET_CSRF_TOKEN_H__
#define GET_CSRF_TOKEN_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <alloca.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <curl/curl.h>
//#include <curl/types.h>
#include <curl/easy.h>

#include "string_ops.h"

/*
THis function get anti csrf token of param var

*/

char *parse_token(char *str);
char *get_anti_csrf_token(char *url, char *param, char *agent);
 

#endif
