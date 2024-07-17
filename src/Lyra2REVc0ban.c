#include "lyra2re.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "lyra2.h"

//void lyra2revc0ban_hash(const char* input, char* output)
void lyra2revc0ban_hash(const char* input, char* output, uint32_t _len)
{

    uint32_t hashB[8];


	LYRA2((void*)hashB, 32, (const void*)input, 80, (const void*)input, 80, 2, 330, 256);


	memcpy(output, hashB, 32);
}
