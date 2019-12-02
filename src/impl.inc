#include <zephyr.h>
#include <logging/log.h>

#define LOG_LEVEL LOG_LEVEL_DBG
LOG_MODULE_REGISTER(main);

void main() {
  LOG_ERR("main");
}
