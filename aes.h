#ifndef _AES_H_
#define _AES_H_

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
void AES128_encrypt(uint8_t* input, const uint8_t* key, uint8_t *output);
void AES128_decrypt(uint8_t* input, const uint8_t* key, uint8_t *output);

#ifdef __cplusplus
}
#endif

#endif
