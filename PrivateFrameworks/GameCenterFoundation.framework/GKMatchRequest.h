
@interface GKMatchRequest : NSObject <GKReportable> {
    GKMatchRequestInternal * _internal;
    id /* block */  _inviteeResponseHandler;
    id /* block */  _recipientResponseHandler;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property unsigned long long defaultNumberOfPlayers;
@property (nonatomic, readonly) bool hasFutureRecipientProperties;
@property (retain) GKMatchRequestInternal *internal;
@property (copy) NSString *inviteMessage;
@property (copy) id /* block */ inviteeResponseHandler;
@property unsigned long long maxPlayers;
@property unsigned long long minPlayers;
@property unsigned int playerAttributes;
@property unsigned long long playerGroup;
@property (retain) NSArray *playersToInvite;
@property (copy) NSDictionary *properties;
@property (copy) NSString *queueName;
@property (copy) NSDictionary *recipientProperties;
@property (copy) id /* block */ recipientResponseHandler;
@property (retain) NSArray *recipients;
@property bool restrictToAutomatch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;
+ (id)reportableKeyPaths;
+ (id)sanitizeProperties:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultNumberOfPlayersIsValid;
- (id)description;
- (void)ensureValidityHosted:(bool)arg1;
- (void)expectFutureRecipientPropertiesForPlayers:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)guestPlayers;
- (bool)hasFutureRecipientProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)inviteMessage;
- (id /* block */)inviteeResponseHandler;
- (bool)isConfiguredForAutomatchOnly;
- (bool)isEqual:(id)arg1;
- (bool)isIncorrectlyInvitingPlayers;
- (bool)isRecipientCountValid;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)playersToInvite;
- (id)recipientProperties;
- (id /* block */)recipientResponseHandler;
- (id)recipients;
- (void)removeLocalPlayerFromPlayersToInvite;
- (bool)respondsToSelector:(SEL)arg1;
- (id)serialQueue;
- (void)setInternal:(id)arg1;
- (void)setInviteMessage:(id)arg1;
- (void)setInviteeResponseHandler:(id /* block */)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRecipientProperties:(id)arg1;
- (void)setRecipientResponseHandler:(id /* block */)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)updateRecipientProperties:(id)arg1;
- (void)updateRecipientProperties:(id)arg1 forPlayer:(id)arg2 withSanitization:(bool)arg3;
- (id)validateForHosted:(bool)arg1;
- (id)validateForHosted:(bool)arg1 turnBased:(bool)arg2;
- (id)validateForTurnBased;
- (id)validateNumbersOfPlayersWithMax:(unsigned long long)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
