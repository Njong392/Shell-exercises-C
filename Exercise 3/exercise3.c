#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(){
    
    int len = 5;
    int read_fd;
    int write_fd;
    char buf[len];
    char read_from;
    char write_to;
    
    
    read_fd = open("exercise3.txt" ,O_RDONLY);
    printf("%d \n",read_fd);
    
    write_fd = open("exercise3a.txt" ,O_WRONLY);
    printf("%d \n", write_fd);

   read_from = read(read_fd,buf,len);
    printf("%s \n",buf);
    
    if (read_fd ==-1) {
        printf("Create file you want to read first");
    }
    
    if (write_fd != -1) {
        write_to = write(write_fd, buf,len);
    } else {
        if (write_fd != 0) {
            write_fd = open("exercise3a.txt", O_CREAT);
            write_to = write(write_fd,buf,len);
        }
    }
    
}
