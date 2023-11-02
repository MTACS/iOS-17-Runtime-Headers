
@interface GKTurnBasedExchangeReply : NSObject {
    GKDaemonProxy * _daemonProxy;
    GKTurnBasedExchangeReplyInternal * _internal;
    GKTurnBasedMatch * _match;
    GKTurnBasedParticipant * _recipient;
}

@property (nonatomic, retain) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, retain) GKTurnBasedParticipant *recipient;
@property (nonatomic, readonly) NSDate *replyDate;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithDaemonProxy:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 daemonProxy:(id)arg2;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)match;
- (id)message;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)recipient;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
