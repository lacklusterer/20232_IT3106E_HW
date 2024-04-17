#include <unistd.h>

int main(int argc, char *argv[]) {
    char *envp[] = { NULL };

    execve("/bin/ls", argv, envp);

    // If execve returns, it means an error occurred
    perror("execve");
    return 1;
}
