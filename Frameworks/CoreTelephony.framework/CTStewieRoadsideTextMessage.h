
@interface CTStewieRoadsideTextMessage : NSObject <CTStewieMessageIncoming, CTStewieMessageOutgoing> {
    long long  _conversationID;
    long long  _providerId;
    long long  _sequenceNum;
    NSString * _text;
}

@property (nonatomic) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long providerId;
@property (nonatomic) long long sequenceNum;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;

+ (double)estimatedSendTimeForRoadsideText:(id)arg1;
+ (long long)maxLengthInBytesForIncomingText;
+ (long long)maxLengthInBytesForOutgoingText;
+ (long long)maxSequenceNum;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedSendTime;
- (id)initIncomingTextMessageWithConversationID:(long long)arg1 providerId:(long long)arg2 sequenceNum:(long long)arg3 text:(id)arg4 error:(id*)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(long long)arg1 providerId:(long long)arg2 sequenceNum:(long long)arg3 text:(id)arg4 error:(id*)arg5;
- (id)initWithConversationIDInternal:(long long)arg1 providerId:(long long)arg2 sequenceNum:(long long)arg3 text:(id)arg4 maxTextLength:(unsigned long long)arg5 error:(id*)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoadsideTextMessage:(id)arg1;
- (long long)providerId;
- (long long)sequenceNum;
- (void)setConversationID:(long long)arg1;
- (void)setProviderId:(long long)arg1;
- (void)setSequenceNum:(long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
