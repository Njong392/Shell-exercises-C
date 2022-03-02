#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
 int len =8;
 int read_fd;
 int write_fd;
 int half_len = len/2;
 char buff[half_len];
 char first_letters;
 
 read_fd = open("exercise2.txt", O_RDONLY);
 
 printf("%d \n", read_fd);
	
 first_letters = read(read_fd, buff,len);
 
 write_fd = open("exercise2a.txt", O_WRONLY);
 const char *buf = first_letters;
 ssize_t nr;
 
 
 nr = write(write_fd, buf, strlen(buf));
	


}
