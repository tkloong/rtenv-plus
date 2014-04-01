#ifndef ROMFS_H
#define ROMFS_H

#include <stdint.h>
#include "path.h"
#include "fs.h"
#define ROMFS_TYPE "romfs"

struct romfs_entry {
    uint32_t parent;
    uint32_t prev;
    uint32_t next;
    uint32_t isdir;
    uint32_t len;
    uint8_t name[PATH_MAX];
};

void romfs_server();

#endif
