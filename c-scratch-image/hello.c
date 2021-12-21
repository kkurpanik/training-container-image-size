#include <sys/syscall.h>
#include <unistd.h>

const char message[] = "Hello World from C!\n";

int main() {
  syscall(SYS_write, STDOUT_FILENO, message, sizeof(message) - 1);
  return 0;
}
