#ifndef SPI_BRIDGE_H
#define SPI_BRIDGE_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


extern size_t WRTnode2r_spi_read(char * buf, int is_force);
extern int WRTnode2r_spi_status(char* status_buf);
extern int WRTnode2r_spi_start(void);
extern size_t WRTnode2r_spi_write(char * buf, int len, int is_force);

#endif
