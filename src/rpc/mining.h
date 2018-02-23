// Copyright (c) 2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H

#include <script/script.h>
#include <stdint.h>
#include <univalue.h>



class CChainParams;
class CConnman;

/** Generate blocks (mine) */
UniValue generateBlocks(std::shared_ptr<CReserveScript> coinbaseScript, int nGenerate, uint64_t nMaxTries, bool keepScript);
void GenerateBitcoins(bool fGenerate, int nThreads, const CChainParams& chainparams, CConnman& connman);

/** Check bounds on a command line confirm target */
unsigned int ParseConfirmTarget(const UniValue& value);

#endif
