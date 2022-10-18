#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  trace(1);

  fork();
  fork();
  fork();

  trace(0);

  fork();
  exit();
}