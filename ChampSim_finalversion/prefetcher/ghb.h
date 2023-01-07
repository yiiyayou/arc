#ifndef GHB_H
#define GHB_H

#define GHB_T_SIZE 256
#define IT_T_SIZE 256
#define look_head 1
#define degree 10

typedef struct GHB_E GHB_E;
struct GHB_E
{
    uint64_t cl_addr;         // 块序
    GHB_E * prev_ptr = NULL;    // 链表指针
    //uint64_t last_stride=0;
} ;

struct GHB_E GHB_T[GHB_T_SIZE];

struct IT_E
{
    GHB_E * GHB_E_ptr = NULL;
};

struct IT_E IT_T[IT_T_SIZE];

unsigned int now_index = 0;


#endif