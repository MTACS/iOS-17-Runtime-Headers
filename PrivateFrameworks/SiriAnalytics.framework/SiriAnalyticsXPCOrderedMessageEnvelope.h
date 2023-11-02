
@interface SiriAnalyticsXPCOrderedMessageEnvelope : NSObject <NSCopying, NSSecureCoding> {
    NSData * _messageBody;
    long long  _messageType;
    NSUUID * _messageUUID;
    NSUUID * _streamUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) NSData *messageBody;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly, copy) NSUUID *messageUUID;
@property (nonatomic, readonly, copy) NSUUID *streamUUID;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 streamUUID:(id)arg2 messageType:(long long)arg3 messageUUID:(id)arg4 messageBody:(id)arg5;
- (id)messageBody;
- (long long)messageType;
- (id)messageUUID;
- (id)streamUUID;
- (unsigned long long)timestamp;

@end
