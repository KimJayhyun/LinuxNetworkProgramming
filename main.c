#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <netinet/ip.h>

#include <arpa/inet.h>

#include <stdio.h>
#include <string.h>

#define MYPORT 8761
#define BACKLOG 10  /* How Many Pending Connections Queue Will Hold */

/*
 *  IP Addr : unsigned long
 *  Port    : short
 *
 * */

/*  
 *  socket();
 *  bind();
 *  listen();
 *  accept();
 * */

int main(void)
{
    int sockfd;
    struct sockaddr_in my_addr;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    /* do some error checking!
     * if there is error, then return -1
     * */

    my_addr.sin_family = AF_INET; /* host byte order */

    my_addr.sin_port = htons(MYPORT); /* short, network byte order */
    // my_addr.sin_port = 0; /* choose an unused port at number */
    
    my_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
    // my_addr.sin_addr.s_addr = htonl(INADDR_ANY); 
    //                                     0 
    
    // bzero(&(my_addr.sin_zero), 8); /* zero the rest of the struct  */
    memset(&(my_addr.sin_zero), 0, sizeof(my_addr.sin_zero));

    bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr));
    /* don't forget your error checking for bind();
     * error => -1
     * */

    listen(sockfd, BACKLOG) /* BACKLOG : Connection Queue Size */

    sin_size = sizeof(struct sockaddr_in);
    // new_fd = accept(sockfd, , sin_size);

    return 0;
}

