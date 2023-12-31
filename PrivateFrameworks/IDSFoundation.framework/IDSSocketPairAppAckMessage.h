
@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long  _offset;
    NSString * _peerResponseIdentifier;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool didWakeHint;
@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) bool wantsAppAck;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;

@end
