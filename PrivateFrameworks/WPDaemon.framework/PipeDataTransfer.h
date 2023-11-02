
@interface PipeDataTransfer : NSObject {
    NSUUID * _peerUUID;
    unsigned short  _rxCurrentDataSize;
    NSMutableData * _rxCurrentReceivedData;
    NSData * _rxData;
    bool  _rxFirstPacket;
    unsigned char  _rxSeqNum;
    NSData * _rxTotalDataToReceive;
    NSMutableData * _rxTotalDataWithLen;
    unsigned short  _rxTotalLenToReceive;
    bool  _rxWaitForMoreData;
    NSData * _txData;
    unsigned long long  _txDataLeftToSend;
    unsigned char  _txSeqNum;
    NSData * _txTotalDataToSend;
    unsigned short  _txTotalLenToSend;
}

@property (retain) NSUUID *peerUUID;
@property unsigned short rxCurrentDataSize;
@property (retain) NSMutableData *rxCurrentReceivedData;
@property (retain) NSData *rxData;
@property bool rxFirstPacket;
@property unsigned char rxSeqNum;
@property (retain) NSData *rxTotalDataToReceive;
@property (retain) NSMutableData *rxTotalDataWithLen;
@property unsigned short rxTotalLenToReceive;
@property bool rxWaitForMoreData;
@property (retain) NSData *txData;
@property unsigned long long txDataLeftToSend;
@property unsigned char txSeqNum;
@property (retain) NSData *txTotalDataToSend;
@property unsigned short txTotalLenToSend;

- (void).cxx_destruct;
- (id)description;
- (unsigned char)generateSequenceNumber;
- (id)initPipeDataTransferForPeer:(id)arg1;
- (id)peerUUID;
- (void)resetAllTransfer;
- (void)resetRxTransfer;
- (void)resetTxTransfer;
- (unsigned short)rxCurrentDataSize;
- (id)rxCurrentReceivedData;
- (id)rxData;
- (bool)rxFirstPacket;
- (unsigned char)rxSeqNum;
- (id)rxTotalDataToReceive;
- (id)rxTotalDataWithLen;
- (unsigned short)rxTotalLenToReceive;
- (bool)rxWaitForMoreData;
- (void)setPeerUUID:(id)arg1;
- (void)setRxCurrentDataSize:(unsigned short)arg1;
- (void)setRxCurrentReceivedData:(id)arg1;
- (void)setRxData:(id)arg1;
- (void)setRxFirstPacket:(bool)arg1;
- (void)setRxSeqNum:(unsigned char)arg1;
- (void)setRxTotalDataToReceive:(id)arg1;
- (void)setRxTotalDataWithLen:(id)arg1;
- (void)setRxTotalLenToReceive:(unsigned short)arg1;
- (void)setRxWaitForMoreData:(bool)arg1;
- (void)setTxData:(id)arg1;
- (void)setTxDataLeftToSend:(unsigned long long)arg1;
- (void)setTxSeqNum:(unsigned char)arg1;
- (void)setTxTotalDataToSend:(id)arg1;
- (void)setTxTotalLenToSend:(unsigned short)arg1;
- (id)txData;
- (unsigned long long)txDataLeftToSend;
- (unsigned char)txSeqNum;
- (id)txTotalDataToSend;
- (unsigned short)txTotalLenToSend;

@end
