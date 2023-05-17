#include <errno.h>
#include <stdio.h>
#include <io.h>

int main() {
  _close(_fileno(stdout));
  int fd = _fileno(stdout);
  fprintf(stderr, "fd res: %d, errno: %d", fd, errno);
  return 0;
}
