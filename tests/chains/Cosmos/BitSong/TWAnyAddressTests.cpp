// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "../CosmosTestHelpers.h"

namespace TW::Cosmos::tests {

static const std::string gBitSongAddr = "bitsong1rjkqxle7xe32fz05h4nsgxx9kfpejddxy376se";
static const std::string gBitSongHrp = "bitsong";

TEST(TWBitSongAnyAddress, AllBitSongAddressTests) {
    CosmosAddressParameters parameters{.hrp = gBitSongHrp, .coinType = TWCoinTypeBitSong, .address = gBitSongAddr};
    TestCosmosAddressParameters(parameters);
}

} // namespace TW::Cosmos::tests
