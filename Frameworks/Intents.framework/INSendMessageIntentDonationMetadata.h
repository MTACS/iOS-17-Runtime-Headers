
@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata {
    bool  _businessChat;
    bool  _mentionsCurrentUser;
    bool  _notifyRecipientAnyway;
    unsigned long long  _recipientCount;
    bool  _replyToCurrentUser;
}

@property (getter=isBusinessChat, nonatomic) bool businessChat;
@property (nonatomic) bool mentionsCurrentUser;
@property (nonatomic) bool notifyRecipientAnyway;
@property (nonatomic) unsigned long long recipientCount;
@property (getter=isReplyToCurrentUser, nonatomic) bool replyToCurrentUser;

+ (Class)_intentClass;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBusinessChat;
- (bool)isEqual:(id)arg1;
- (bool)isReplyToCurrentUser;
- (bool)mentionsCurrentUser;
- (bool)notifyRecipientAnyway;
- (unsigned long long)recipientCount;
- (void)setBusinessChat:(bool)arg1;
- (void)setMentionsCurrentUser:(bool)arg1;
- (void)setNotifyRecipientAnyway:(bool)arg1;
- (void)setRecipientCount:(unsigned long long)arg1;
- (void)setReplyToCurrentUser:(bool)arg1;

@end
