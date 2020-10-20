
#ifndef KAWPOW_H
#define KAWPOW_H

#include "miner.h"

extern int kawpow_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void kawpow_regenhash(struct work *work);

#endif /* KAWPOW_H */
