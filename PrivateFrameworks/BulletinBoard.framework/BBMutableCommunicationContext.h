
@interface BBMutableCommunicationContext : BBCommunicationContext

@property (nonatomic, copy) NSString *associatedObjectUri;
@property (getter=isBusinessCorrespondence, nonatomic) bool businessCorrespondence;
@property (nonatomic) long long capabilities;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic) bool mentionsCurrentUser;
@property (nonatomic) bool notifyRecipientAnyway;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic, copy) NSArray *recipients;
@property (getter=isReplyToCurrentUser, nonatomic) bool replyToCurrentUser;
@property (nonatomic, copy) BBContact *sender;
@property (nonatomic) bool systemImage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssociatedObjectUri:(id)arg1;
- (void)setBusinessCorrespondence:(bool)arg1;
- (void)setCapabilities:(long long)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setMentionsCurrentUser:(bool)arg1;
- (void)setNotifyRecipientAnyway:(bool)arg1;
- (void)setRecipientCount:(unsigned long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReplyToCurrentUser:(bool)arg1;
- (void)setSender:(id)arg1;
- (void)setSystemImage:(bool)arg1;

@end
