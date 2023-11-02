
@interface SKAStatusPublishingManager : NSObject <SKAStatusPublishingManaging> {
    <SKAAccountProviding> * _accountProvider;
    <SKAChannelManaging> * _channelManager;
    bool  _clientIsRateLimited;
    <SKADatabaseManaging> * _databaseManager;
    <SKAStatusEncryptionManaging> * _encryptionManager;
    NSObject<OS_dispatch_queue> * _internalWorkQueue;
    <SKAInvitationManaging> * _invitationManager;
    bool  _pendingRequestScheduled;
}

@property (nonatomic, retain) <SKAAccountProviding> *accountProvider;
@property (nonatomic, retain) <SKAChannelManaging> *channelManager;
@property bool clientIsRateLimited;
@property (nonatomic, retain) <SKADatabaseManaging> *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SKAStatusEncryptionManaging> *encryptionManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (nonatomic, retain) <SKAInvitationManaging> *invitationManager;
@property bool pendingRequestScheduled;
@property (readonly) Class superclass;

+ (id)_errorForDuplicateStatusPublishRequestWithIdentifier:(id)arg1;
+ (id)_errorForRateLimit;
+ (id)_errorForStatusPublishRequestWithIdentifier:(id)arg1 requestedStatusCreationDate:(id)arg2 isOlderThanExistingStatus:(id)arg3 existingStatusCreationDate:(id)arg4;
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (void)_markPublishAttempt;
- (long long)_maxRapidPublishes;
- (long long)_maxRetryCount;
- (double)_pendingDelayTime;
- (void)_publishStatusRequest:(id)arg1 statusTypeIdentifier:(id)arg2 afterTime:(double)arg3 isPendingPublish:(bool)arg4 retryCount:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (double)_rapidPublishesTimescale;
- (double)_rateLimitDelayTime;
- (void)_removePendingPublishRequestWithUniqueIdentifier:(id)arg1 databaseContext:(id)arg2;
- (void)_removePendingPublishRequestsForStatusTypeIdentifier:(id)arg1 olderThanRequest:(id)arg2 databaseContext:(id)arg3;
- (bool)_shouldAbandonRequestForError:(id)arg1;
- (bool)_shouldAllowPublishForPublishRequest:(id)arg1 onChannel:(id)arg2 error:(id*)arg3;
- (bool)_shouldClientRateLimit;
- (bool)_shouldReauthForError:(id)arg1;
- (bool)_shouldRetryWithDelayForError:(id)arg1;
- (bool)_shouldRollChannelForError:(id)arg1;
- (id)accountProvider;
- (id)channelManager;
- (bool)clientIsRateLimited;
- (void)createPersonalChannelForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 completion:(id /* block */)arg3;
- (id)databaseManager;
- (id)encryptionManager;
- (void)ensurePendingPublishRequestExistsWithPublishRequest:(id)arg1 forStatusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;
- (void)findOrCreatePersonalChannelForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDatabaseManager:(id)arg1 channelManager:(id)arg2 accountProvider:(id)arg3 encryptionManager:(id)arg4 invitationManager:(id)arg5;
- (id)internalWorkQueue;
- (id)invitationManager;
- (bool)pendingRequestScheduled;
- (void)publishPendingRequestForReason:(long long)arg1;
- (void)publishPendingRequestsWithDelay:(double)arg1;
- (void)publishStatusRequest:(id)arg1 statusTypeIdentifier:(id)arg2 afterTime:(double)arg3 isPendingPublish:(bool)arg4 completion:(id /* block */)arg5;
- (void)removePendingPublishRequestsForStatusTypeIdentifier:(id)arg1 olderThanRequest:(id)arg2;
- (void)setAccountProvider:(id)arg1;
- (void)setChannelManager:(id)arg1;
- (void)setClientIsRateLimited:(bool)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setEncryptionManager:(id)arg1;
- (void)setInternalWorkQueue:(id)arg1;
- (void)setInvitationManager:(id)arg1;
- (void)setPendingRequestScheduled:(bool)arg1;

@end
