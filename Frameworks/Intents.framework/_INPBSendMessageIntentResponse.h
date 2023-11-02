
@interface _INPBSendMessageIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSendMessageIntentResponse> {
    struct { }  _has;
    _INPBMessage * _sentMessage;
    NSArray * _sentMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSentMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBMessage *sentMessage;
@property (nonatomic, copy) NSArray *sentMessages;
@property (nonatomic, readonly) unsigned long long sentMessagesCount;
@property (readonly) Class superclass;

+ (Class)sentMessagesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSentMessages:(id)arg1;
- (void)clearSentMessages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSentMessage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sentMessage;
- (id)sentMessages;
- (id)sentMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sentMessagesCount;
- (void)setSentMessage:(id)arg1;
- (void)setSentMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
