
@interface EMOutgoingMessage : NSObject <EFPubliclyDescribable, EMOutgoingMessageBuilder, NSSecureCoding> {
    long long  _action;
    long long  _conversationNotificationLevel;
    NSData * _messageData;
    EMMessageObjectID * _originalMessageID;
    bool  _shouldEncrypt;
    bool  _shouldSign;
}

@property (nonatomic) long long action;
@property (nonatomic) long long conversationNotificationLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *messageData;
@property (nonatomic, retain) EMMessageObjectID *originalMessageID;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldSign;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (long long)conversationNotificationLevel;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageData:(id)arg1;
- (id)messageData;
- (id)originalMessageID;
- (void)setAction:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setMessageData:(id)arg1;
- (void)setOriginalMessageID:(id)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;

@end
