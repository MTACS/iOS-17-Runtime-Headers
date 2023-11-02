
@interface TUConversationNotice : NSObject <TUConversationNoticeProtocol> {
    NSUUID * _UUID;
    NSURL * _actionURL;
    NSString * _bundleIdentifier;
    NSString * _item;
    long long  _queueItemType;
    TUConversationActivitySession * _session;
    long long  _sessionEventType;
    NSUUID * _sessionUUID;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *item;
@property (nonatomic) long long queueItemType;
@property (nonatomic, retain) TUConversationActivitySession *session;
@property (nonatomic) long long sessionEventType;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)actionURL;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationNotice:(id)arg1;
- (id)item;
- (long long)queueItemType;
- (id)session;
- (long long)sessionEventType;
- (id)sessionUUID;
- (void)setActionURL:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setQueueItemType:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionEventType:(long long)arg1;
- (void)setSessionUUID:(id)arg1;

@end
