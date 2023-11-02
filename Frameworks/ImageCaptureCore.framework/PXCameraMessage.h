
@interface PXCameraMessage : NSObject {
    unsigned int  _magicNumber;
    NSMutableDictionary * _messageData;
    NSUUID * _messageID;
    NSMutableDictionary * _messageMetadata;
    unsigned int  _messageType;
    unsigned int  _partCount;
    unsigned int  _partIndex;
    unsigned int  _priority;
    unsigned int  _protocolVersion;
    NSUUID * _senderID;
}

@property (nonatomic, readonly) unsigned int magicNumber;
@property (nonatomic, retain) NSMutableDictionary *messageData;
@property (nonatomic, copy) NSUUID *messageID;
@property (nonatomic, retain) NSMutableDictionary *messageMetadata;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int partCount;
@property (nonatomic) unsigned int partIndex;
@property (nonatomic) unsigned int priority;
@property (nonatomic, readonly) unsigned int protocolVersion;
@property (nonatomic, copy) NSUUID *senderID;

+ (id)dataMessageID:(id)arg1;
+ (unsigned int)expectedMessageDataSize:(id)arg1;
+ (unsigned int)headerLengthForVersion:(unsigned int)arg1;
+ (id)headerMessageID:(id)arg1;
+ (unsigned int)uint32FromBytes:(char **)arg1;
+ (id)uuidFromBytes:(char **)arg1;

- (void)dealloc;
- (id)dictionaryFromBytes:(char **)arg1 length:(unsigned int)arg2;
- (id)encodeMessage;
- (void)incrementBufPointer:(char **)arg1 andOffset:(unsigned int*)arg2 length:(unsigned int)arg3;
- (id)init;
- (id)initWithEncodedMessage:(id)arg1;
- (unsigned int)magicNumber;
- (id)messageData;
- (id)messageID;
- (id)messageMetadata;
- (unsigned int)messageType;
- (unsigned int)partCount;
- (unsigned int)partIndex;
- (unsigned int)priority;
- (unsigned int)protocolVersion;
- (id)senderID;
- (void)setMessageData:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMessageMetadata:(id)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setPartCount:(unsigned int)arg1;
- (void)setPartIndex:(unsigned int)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setSenderID:(id)arg1;

@end
