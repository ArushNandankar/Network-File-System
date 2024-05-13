#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "headers.h"

// #define NM_PORT 8090

#define SUPER_BUFFER_SIZE 1024
#define MAX_BUFFER_SIZE 1024

#define pnl printf("\n");