#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  int cs1;
  trace(1);

  getpid();
  getpid();
  getpid();
  getpid();
  getpid();

  cs1 = trace(0);
  printf(1, "numero de chamadas de system calls: %d\n", cs1);

  getpid();
  getpid();

  cs1 = trace(0);
  printf(1, "numero de chamadas de system calls: %d\n", cs1);
  
  exit();
}