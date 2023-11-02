
@interface TUConversationActivityEvent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _item;
    NSString * _localizedDescription;
    TUConversationParticipant * _originator;
    long long  _queueItemType;
    TUConversationActivitySession * _session;
    NSUUID * _sessionUUID;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *item;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, retain) TUConversationParticipant *originator;
@property (nonatomic) long long queueItemType;
@property (nonatomic, retain) TUConversationActivitySession *session;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 originator:(id)arg2 type:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationActivityEvent:(id)arg1;
- (id)item;
- (id)localizedDescription;
- (id)originator;
- (long long)queueItemType;
- (id)session;
- (id)sessionUUID;
- (void)setItem:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setQueueItemType:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)type;
- (id)url;

@end
