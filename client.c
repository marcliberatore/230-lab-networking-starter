#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

/*
  The main standard library functions needed to get this working are
 - socket() 
 - connect() 

 You'll also need to know:
 host = 128.119.243.147
 port = 27994

 You might also find the sample echo client code helpful:
 https://www-edlab.cs.umass.edu/cs230/week-11.zip
*/

int main(int argc, char **argv) {
    int socket_fd = -1; // TODO write your socket creation code here, using socket()

    if (socket_fd < 0) {
        printf("Error creating socket\n");
        exit(-1);
    }
    printf("Socket successfully created\n");

    struct sockaddr_in client_address;

    /* set client_address attributes here
     * sin_family, sin_port, sin_addr, sin_zero need all be set
     * hint: you may want to look at htons(), htonl(), ntohs(), ntohl(),
     * memset(), bzero(), and inet_pton() functions
     */

    /* 
     * Then, once client_address is configured, call connect()
     * and store its return value in status.
     */
    int status = connect(-1, (struct sockaddr *)&client_address, -1); // TODO insert correct arguments here

    if (status < 0) {
        printf("Connection unsuccessful");
        close(socket_fd);
        exit(-1);
    }

    printf("Connection successful\n");

    // Build the message to send to the server
    char *sid = "<your email>";
    char *message = (char *) malloc(256);
    sprintf(message, "cs230 HELLO %s\n", sid);

    printf("%s", message);

    // Now send it on the socket_fd
    status = send(-1, NULL, -1, -1); // TODO insert correct arguments here

    // don't forget to check status for errors

    // then, one-by-one, start doing each of the following tasks:

    // receive the response from the server -- first allocate
    // a char* buffer to receive the message

    // then use recv() to receive the message into that buffer

    // then split the received message and parse the ints

    // then do math

    // then format the correct respons (maybe print it, too)

    // then send it to the server on the socket

    // then wrap it all up in a loop

    // make sure to stop when you get the flag!

    // then add the rest: parse argv[] as required by the project directions,
    // use the passed email, host, and port, etc.

    // you won't get to all of this in lab! Just do one part at a time, and
    // get it working, before you move to the next part.
    return 0;
}