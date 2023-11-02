
@interface CEMMessageBase : CEMPayloadBase {
    NSString * _messageIdentifier;
    NSString * _messageInReplyTo;
    CEMAnyPayload * _messagePayload;
    NSDate * _messageTimestamp;
    NSString * _messageType;
}

@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, copy) NSString *messageInReplyTo;
@property (nonatomic, copy) CEMAnyPayload *messagePayload;
@property (nonatomic, copy) NSDate *messageTimestamp;
@property (nonatomic, copy) NSString *messageType;

+ (id)messageForData:(id)arg1 error:(id*)arg2;
+ (id)messageForPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadMessageFromDictionary:(id)arg1 error:(id*)arg2;
- (id)messageIdentifier;
- (id)messageInReplyTo;
- (id)messagePayload;
- (id)messageTimestamp;
- (id)messageType;
- (id)serialize;
- (id)serializeAsDataWithError:(id*)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setMessageInReplyTo:(id)arg1;
- (void)setMessagePayload:(id)arg1;
- (void)setMessageTimestamp:(id)arg1;
- (void)setMessageType:(id)arg1;

@end
