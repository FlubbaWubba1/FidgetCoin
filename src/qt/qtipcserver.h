#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define FidgetCoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "FidgetCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
