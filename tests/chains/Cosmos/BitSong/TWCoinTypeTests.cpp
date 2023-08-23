// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>

namespace TW::Cosmos::tests {
TEST(TWBitSongCoinType, TWCoinType) {
    const auto coin = TWCoinTypeBitSong;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("3072C92B5E646CC952F84459743AD68172BDE468AFFC1B4F8FC70373612C5914"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("bitsong1vn2fc2cdt2r5kseptl86rstqudxly2c3jxw4x7"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "bitsong");
    assertStringsEqual(name, "BitSong");
    assertStringsEqual(symbol, "BTSG");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 6);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainCosmos);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "bitsong-2b");
    assertStringsEqual(txUrl, "https://www.mintscan.io/bitsong/txs/3072C92B5E646CC952F84459743AD68172BDE468AFFC1B4F8FC70373612C5914");
    assertStringsEqual(accUrl, "https://www.mintscan.io/bitsong/account/bitsong1vn2fc2cdt2r5kseptl86rstqudxly2c3jxw4x7");
}
} // namespace TW::Cosmos::tests
