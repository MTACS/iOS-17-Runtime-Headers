
@interface IDSSocketPairAckMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned int  _sequenceNumber;
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

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (void)setSequenceNumber:(unsigned int)arg1;

@end
