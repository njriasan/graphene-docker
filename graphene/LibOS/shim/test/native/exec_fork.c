/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

int main() {
    char * argv[] = { "./fork", NULL };
    execv(argv[0], argv);
    return 0;
}
