#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "../types.h"
#include "../util.h"
#include "io.h"

#define IO_READ_CHUNK_SIZE 2097152 //2 megabytes
#define IO_READ_ERROR_GENERAL "Error reading file: %s. errno %d\n"
#define IO_READ_ERROR_MEMORY "Not enough memory to read file: %s\n"

File io_file_read(const char *path){
    File file = {.is_valid = false};
    FILE *fp = fopen(path, "rb");
    if (ferror(fp)) {
        ERROR_RETURN(file, IO_READ_ERROR_GENERAL, path, errno);
    }
    char *data = NULL;
    size_t used = 0;
    size_t size =0;
    size_t n;

    while(true) {
        if (used + IO_READ_CHUNK_SIZE + 1 > size)
            size = used + IO_READ_CHUNK_SIZE + 1;

        if (size <= used) {
            free(data);
            ERROR_RETURN(file, "Input file too large: %s\n", path);
        }

        //tmp = realloc(data, size);

//        if(!tmp) {
//            free(data);
//            ERROR_RETURN(file, IO_READ_CHUNK_SIZE, fp);
//        }

    }

}

int io_file_write(void *buffer, size_t size, const char *path){

}