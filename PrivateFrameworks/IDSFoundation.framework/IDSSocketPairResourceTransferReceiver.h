
@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessageProtocol> {
    bool  _compressed;
    bool  _done;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    int  _fileDescriptor;
    bool  _isResuming;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    NSString * _peerResponseIdentifier;
    NSString * _resourcePath;
    bool  _resumeResourceTransfers;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytesExpected;
    unsigned long long  _totalBytesReceived;
    bool  _wantsAppAck;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool didWakeHint;
@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic, readonly) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned long long totalBytesReceived;
@property (nonatomic, readonly) bool wantsAppAck;

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;
+ (id)modernIncomingFilePath;

- (void).cxx_destruct;
- (void)abortTransfer;
- (bool)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2;
- (void)dealloc;
- (id)expiryDate;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(bool)arg2 receiverError:(unsigned char*)arg3;
- (id)messageUUID;
- (void)setExpiryDate:(id)arg1;
- (unsigned long long)totalBytesReceived;
- (bool)writeResourceData:(id)arg1;
- (bool)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;

@end
