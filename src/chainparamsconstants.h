#ifndef BITCOIN_CHAINPARAMSCONSTANTS_H
#define BITCOIN_CHAINPARAMSCONSTANTS_H
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <primitives/blockhash.h>
#include <uint256.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000000001e31636fe73c91c542b9e6c86163aa3cf1f3815019c79ae");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000014644fec64895240729227e");
    const uint64_t MAINNET_ASSUMED_BLOCKCHAIN_SIZE = 206;
    const uint64_t MAINNET_ASSUMED_CHAINSTATE_SIZE = 3;

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("0000000000d72b19b40522207358cf3f9d866c26f102edf863313e2526b44794");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000006c5f2360687f4cfee5");
    const uint64_t TESTNET_ASSUMED_BLOCKCHAIN_SIZE = 55;
    const uint64_t TESTNET_ASSUMED_CHAINSTATE_SIZE = 2;
} // namespace ChainParamsConstants

#endif // BITCOIN_CHAINPARAMSCONSTANTS_H
