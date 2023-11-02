
@interface CTStewieEmergencyTextMessage : NSObject <CTStewieMessageIncoming, CTStewieMessageOutgoing> {
    long long  _conversationID;
    long long  _incomingTextNotifyOption;
    long long  _sequenceNum;
    NSString * _text;
}

@property (nonatomic) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long incomingTextNotifyOption;
@property (nonatomic) long long sequenceNum;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;

+ (double)estimatedSendTimeForEmergencyText:(id)arg1;
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
- (long long)incomingTextNotifyOption;
- (id)initIncomingTextMessageWithConversationID:(long long)arg1 sequenceNum:(long long)arg2 emergencyText:(id)arg3 notifyOption:(long long)arg4 error:(id*)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(long long)arg1 sequenceNum:(long long)arg2 emergencyText:(id)arg3 error:(id*)arg4;
- (id)initWithConversationIDInternal:(long long)arg1 sequenceNum:(long long)arg2 emergencyText:(id)arg3 maxTextLength:(unsigned long long)arg4 error:(id*)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmergencyTextMessage:(id)arg1;
- (long long)sequenceNum;
- (void)setConversationID:(long long)arg1;
- (void)setIncomingTextNotifyOption:(long long)arg1;
- (void)setSequenceNum:(long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
