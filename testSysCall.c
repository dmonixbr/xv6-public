#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  int cs1, cs2, cs3, cs4;
  cs1 = cs();
  cs2 = cs();
  sleep(4);
  cs3 = cs();
  sleep(6);
  cs4 = cs();
  printf(1, "context switch counts = %d, %d, %d, %d\n", cs1, cs2, cs3, cs4);

  exit();
}