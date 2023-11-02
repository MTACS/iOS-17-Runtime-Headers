
@interface ICSharedListeningConnectionController : NSObject {
    NSString * _bundleID;
    <ICSharedListeningConnectionControllerDelegate> * _delegate;
    ICLiveLinkIdentity * _identity;
    NSURL * _inviteURL;
    NSString * _sessionIdentifier;
    NSString * _sessionToken;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic) <ICSharedListeningConnectionControllerDelegate> *delegate;
@property (nonatomic, readonly) ICLiveLinkIdentity *identity;
@property (nonatomic, retain) NSURL *inviteURL;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSString *sessionToken;

+ (id)externalSharedListeningConnectionWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;
+ (id)sharedListeningConnectionWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;

- (void).cxx_destruct;
- (id)bundleID;
- (id)delegate;
- (id)identity;
- (id)initWithSessionIdentifier:(id)arg1 identity:(id)arg2 bundleID:(id)arg3;
- (id)inviteURL;
- (void)sendMessage:(id)arg1;
- (id)sessionIdentifier;
- (id)sessionToken;
- (void)setDelegate:(id)arg1;
- (void)setInviteURL:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)start;
- (void)stop;

@end
