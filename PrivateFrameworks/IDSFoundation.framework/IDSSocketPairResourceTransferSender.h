
@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    bool  _compressPayload;
    bool  _compressed;
    bool  _didWakeHint;
    bool  _done;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    int  _fileDescriptor;
    unsigned int  _maxChunkSize;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    unsigned long long  _nextByte;
    NSString * _peerResponseIdentifier;
    NSDictionary * _resourceAttributes;
    NSString * _resourcePath;
    bool  _resumeResourceTransfers;
    bool  _sentFirstMessage;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytes;
    bool  _wantsAppAck;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool didWakeHint;
@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly) bool isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic) unsigned long long nextByte;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic) bool resumeResourceTransfers;
@property (nonatomic, readonly) bool sentFirstMessage;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly) bool wantsAppAck;

- (void).cxx_destruct;
- (void)closeFileAndMarkDone;
- (unsigned char)command;
- (void)dealloc;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(bool)arg5 wantsAppAck:(bool)arg6 compressPayload:(bool)arg7 compressed:(bool)arg8 didWakeHint:(bool)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 expiryDate:(id)arg12;
- (bool)isDone;
- (unsigned int)maxChunkSize;
- (id)messageUUID;
- (unsigned long long)nextByte;
- (id)nextMessage;
- (id)nextMessage_old;
- (id)readNextBytes;
- (bool)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2;
- (void)reset;
- (bool)resumeResourceTransfers;
- (bool)sentFirstMessage;
- (unsigned int)sequenceNumber;
- (void)setMaxChunkSize:(unsigned int)arg1;
- (void)setNextByte:(unsigned long long)arg1;
- (void)setResumeResourceTransfers:(bool)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (unsigned long long)totalBytes;

@end
