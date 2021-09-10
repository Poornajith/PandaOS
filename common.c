
#ifndef COMMON_H
#define COMMON_H

typedef unsigned int   u32int;
typedef unsigned char  u8int;

void memset(u8int *dest, u8int val, u32int len);

#endif 
// Write len copies of val into dest.
void memset(u8int *dest, u8int val, u32int len)
{
    u8int *temp = (u8int *)dest;
    for ( ; len != 0; len--) *temp++ = val;
}
