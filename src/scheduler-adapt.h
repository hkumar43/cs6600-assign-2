#ifndef __SCHEDULER_H__
#define __SCHEDULER_H__

// Policy Types
typedef enum {OpenPolicy, ClosedPolicy} policytype_t;

typedef struct last_accessed
{
    int bank;           // Last accessed bank of the particular channel and rank
    long long int row;  // Last accessed row of the bank
} last_accessed_t;

void init_scheduler_vars(); //called from main
void scheduler_stats(); //called from main
void schedule(int); // scheduler function called every cycle

#endif //__SCHEDULER_H__

