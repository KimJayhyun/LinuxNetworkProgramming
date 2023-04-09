#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <netinet/ip.h>

#include <arpa/inet.h>

#include <stdio.h>


#define MYPORT 8761
#define BACKLOG 10  /* How Many Pending Connections Queue Will Hold */


int main(void)
{
    struct sockaddr sa;

    struct sockaddr_in in;


    printf("size of sa : %lu\n", sizeof(sa));
    printf("size of in : %lu\n", sizeof(in));
    
    char* ipTest = "132.241.5.10";
      
    printf("%s : %d\n", ipTest, inet_addr(ipTest));


    return 0;
}

