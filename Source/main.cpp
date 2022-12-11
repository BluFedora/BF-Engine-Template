#include "bf/debug/dbg_logger.h"

int main()
{
  bfLogAdd(bfLogGetDefaultLogger());

  bfLogPrint("Hello World\n");

  return 0;
}
