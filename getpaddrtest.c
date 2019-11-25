#include "types.h"
#include "stat.h"
#include "user.h"

void
getpaddrtest(void)
{
 int n;
 int pa = getpaddr((int)&n);
 printf(1, "physical address : %d", pa);

}

int
main(void)
{ getpaddrtest();
  exit();
}
