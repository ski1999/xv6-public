#include "types.h"
#include "stat.h"
#include "user.h"

int n = 0;

int
main(void){
/*
  uint pa;
  //int pid;
  int i = (int)&n;

  pa = getpaddr(i);
  printf (1,"%d\n",pa);
*/
  int pid = vfork();

  if (pid > 0) {
    printf(1, "Parent\n");
    wait();
  }
  else if (pid == 0) {
    printf(1, "Child\n");
    exit();
  }
  
  /*
  if(pid > 0)
    exit();
  
  pa = getpaddr(i);
  printf(1,"%d\n",pa);

  n = 1;
  pa = getpaddr(i);
  printf(1,"%d\n",pa);
  */
  exit();
}
