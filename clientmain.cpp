#include <stdio.h>
#include <stdlib.h>
/* You will to add includes here */

#include <unistd.h> 
#include <sys/socket.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <arpa/inet.h>
#include<bits/stdc++.h>


// Included to get the support library
// #include <calcLib.h>
using namespace std;

#define MAX 80 
#define PORT 8000
#define SA struct sockaddr 


int main(int argc, char *argv[]){
  
  /* Do magic */

	char buffer1[1256], buffer2[1256]; 
    struct sockaddr_in my_addr, my_addr1; 
    int client = socket(AF_INET, SOCK_STREAM, 0); 
    if (client < 0) 
    printf("Error in client creating\n"); 
    else
        printf("Client Created\n"); 
          
    my_addr.sin_family = AF_INET; 
    my_addr.sin_addr.s_addr = INADDR_ANY; 
    my_addr.sin_port = htons(PORT); 
      
    // This ip address will change according to the machine 
    my_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
  
    // Explicitly assigning port number 12010 by  
    // binding client with that port  
    my_addr1.sin_family = AF_INET; 
    my_addr1.sin_addr.s_addr = INADDR_ANY; 
    my_addr1.sin_port = htons(PORT); 
      
    // This ip address will change according to the machine 
    my_addr1.sin_addr.s_addr = inet_addr("127.0.0.1"); 
     
    if (bind(client, (struct sockaddr*) &my_addr1, sizeof(struct sockaddr_in)) == 0) 
    {cout << "";}
    else
    {cout << "";}
      
    socklen_t addr_size = sizeof my_addr; 
    int con = connect(client, (struct sockaddr*) &my_addr, sizeof my_addr); 
    if (con == 0) 
    {
        printf("Connection Successful\n"); 
    }
    else
        printf("Error in Connection\n"); 
  
    /