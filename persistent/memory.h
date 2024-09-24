#ifndef MEMORY_H
#define MEMORY_H

#define MAX_COLORS 2    /* Ideally set this based on initalization */

typedef struct {
    void* ptr;
    int color;
} AllocationRecord;

extern AllocationRecord allocations[MAX_COLORS];
extern int color_assignments[MAX_COLORS];

#endif