/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>

// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    const uint8_t* _ptr;
} pd_EvmAddress_V1_t;

typedef struct {
    uint8_t value;
} pd_TokenSymbol_V1_t;

typedef struct {
    uint8_t value;
    union {
        pd_TokenSymbol_V1_t token;
        pd_EvmAddress_V1_t erc20;
        uint32_t liquidCrowdloan;
        uint16_t foreignAsset;
    };
} pd_DexShare_V1_t;

typedef struct {
    pd_DexShare_V1_t dexShare1;
    pd_DexShare_V1_t dexShare2;
} pd_DexShareFixed_V1_t;

typedef struct {
    uint8_t value;
    union {
        pd_TokenSymbol_V1_t token;
        pd_DexShareFixed_V1_t dexShare;
        pd_EvmAddress_V1_t erc20;
        uint32_t stableAssetPoolToken;
        uint32_t liquidCrowdloan;
        uint16_t foreignAsset;
    };
} pd_CurrencyId_V1_t;

typedef struct {
    pd_EvmAddress_V1_t address;
    pd_VecH256_t storageKeys;
} pd_AccessListItem_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_AccountId_V1_t;

typedef struct {
    uint32_t value;
} pd_ClassIdOfT_V1_t;

typedef struct {
    compactInt_t value;
} pd_CompactAccountIndex_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_EcdsaSignature_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Ed25519Signature_V1_t;

typedef struct {
    uint8_t value;
} pd_ProxyType_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Sr25519Signature_V1_t;

typedef struct {
    pd_BlockNumber_t height;
    uint32_t index;
} pd_Timepoint_V1_t;

typedef struct {
    uint64_t value;
} pd_TokenIdOfT_V1_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecCurrencyId_V1_t;

typedef struct {
    pd_u128_t value;
} pd_Amount_V1_t;

typedef struct {
    pd_ClassIdOfT_V1_t value1;
    pd_TokenIdOfT_V1_t value2;
} pd_ClassIdOfTTokenIdOfT_V1_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountId_V1_t id;
        pd_CompactAccountIndex_V1_t index;
        pd_Bytes_t raw;
        const uint8_t* _ptr;
    };
} pd_LookupasStaticLookupSource_V1_t;

typedef struct {
    uint8_t value;
    union {
        pd_Ed25519Signature_V1_t ed25519;
        pd_Sr25519Signature_V1_t sr25519;
        pd_EcdsaSignature_V1_t ecdsa;
    };
} pd_MultiSignature_V1_t;

typedef struct {
    pd_Call_t call;
} pd_OpaqueCall_V1_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V1_t contained;
} pd_OptionTimepoint_V1_t;

typedef struct {
    uint8_t value;
    pd_CurrencyId_V1_t currencyid;
} pd_PoolId_V1_t;

typedef struct {
    uint8_t value;
    pd_EvmAddress_V1_t h160;
} pd_TransactionAction_V1_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccessListItem_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_CallHashOf_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Eip712Signature_V1_t;

typedef struct {
    uint32_t value;
} pd_EraIndex_V1_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Keys_V1_t;

typedef struct {
    uint8_t some;
    pd_ProxyType_V1_t contained;
} pd_OptionProxyType_V1_t;

typedef struct {
    uint8_t some;
    pd_VecCurrencyId_V1_t contained;
} pd_OptionVecCurrencyId_V1_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V1_t;

typedef struct {
    uint32_t value;
} pd_PoolTokenIndex_V1_t;

typedef struct {
    uint32_t value;
} pd_ReferendumIndex_V1_t;

typedef struct {
    uint32_t value;
} pd_StableAssetPoolId_V1_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V1_t;

typedef struct {
    uint64_t value;
} pd_Weight_V1_t;

#ifdef __cplusplus
}
#endif
