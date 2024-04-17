#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	extern char **environ;

  execve("/bin/ls", argv, environ);

  perror("execve");
  return 1;
}
