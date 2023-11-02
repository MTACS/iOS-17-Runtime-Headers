
@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _numberOfActiveRemoteRequests;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _pendingRequests;
    <NSCopying> * _privacyAcknowledgementObservationToken;
    NSXPCConnection * _remoteRequestingClientConnection;
    NSUUID * _remoteRequestingClientConnectionIdentifier;
    NSObject<OS_dispatch_source> * _remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary * _statusHandlersForPendingIdenticalRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isEntitledForMusicSubscriptionStatusService;
+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_cancelPendingRequests;
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
- (void)_deliverSubscriptionStatusResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (void)_didEndRemoteRequestWithUniqueIdentifier:(id)arg1;
- (void)_handlePrivacyAcknowledgementRequirementChanged:(bool)arg1;
- (void)_handleSeveredRemoteClientConnectionWithIdentifier:(id)arg1;
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeDistributedNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)arg1;
- (void)_invalidateRemoteRequestingClientConnection;
- (id)_remoteRequestingClientConnection;
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;
- (void)_willBeginRemoteRequestWithUniqueIdentifier:(id)arg1 statusHandler:(id /* block */)arg2;
- (bool)_willPerformSubscriptionStatusRequest:(id)arg1 withStatusHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deliverSubscriptionStatusResponse:(id)arg1 forRemoteRequestWithUniqueIdentifier:(id)arg2 error:(id)arg3;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)disableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(id /* block */)arg2;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(id /* block */)arg1;

@end
