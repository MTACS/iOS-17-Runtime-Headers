
@interface MRProtocolMessage : NSObject {
    MRProtocolClientConnection * _clientConnection;
    NSError * _error;
    bool  _isIncomingReply;
    bool  _isOutgoingReply;
    NSData * _protobufData;
    bool  _replied;
    NSString * _replyIdentifier;
    unsigned long long  _timestamp;
    MRProtocolMessageOptions * _transportOptions;
    PBCodable * _underlyingCodableMessage;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long encryptionType;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool isIncomingReply;
@property (nonatomic) bool isOutgoingReply;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, copy) NSString *replyIdentifier;
@property (nonatomic, readonly) bool shouldLog;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) MRProtocolMessageOptions *transportOptions;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) PBCodable *underlyingCodableMessage;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (unsigned long long)currentProtocolVersion;
+ (id)protocolMessageWithProtobufData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientConnection;
- (void)dealloc;
- (id)description;
- (unsigned long long)encryptionType;
- (id)error;
- (id)init;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (bool)isIncomingReply;
- (bool)isOutgoingReply;
- (id)protobufData;
- (bool)reply;
- (id)replyIdentifier;
- (bool)replyWithMessage:(id)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsIncomingReply:(bool)arg1;
- (void)setIsOutgoingReply:(bool)arg1;
- (void)setReplyIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportOptions:(id)arg1;
- (void)setUnderlyingCodableMessage:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)shouldLog;
- (unsigned long long)timestamp;
- (id)transportOptions;
- (unsigned long long)type;
- (id)underlyingCodableMessage;
- (id)uniqueIdentifier;

@end
