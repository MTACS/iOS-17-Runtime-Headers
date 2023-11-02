
@interface ICMusicSubscriptionLeaseSession : NSObject {
    long long  _automaticRefreshCount;
    NSObject<OS_dispatch_source> * _automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <ICMusicSubscriptionLeaseSessionDelegate> * _delegate;
    bool  _delegatedLeaseSession;
    bool  _hasPendingLeaseDidEndPushNotification;
    bool  _isPerformingAutomaticRefresh;
    NSDate * _lastPlaybackRequestDate;
    NSDate * _leaseExpirationDate;
    ICMusicSubscriptionLeaseStatus * _leaseStatus;
    NSRecursiveLock * _lock;
    long long  _pendingLeaseAcquisitionRevisionID;
    ICStoreRequestContext * _requestContext;
    long long  _startedLeaseAcquisitionRevisionID;
}

@property (getter=isAutomaticallyRefreshingLease, nonatomic, readonly) bool automaticallyRefreshingLease;
@property (nonatomic, readonly) <ICMusicSubscriptionLeaseSessionDelegate> *delegate;
@property (getter=isDelegatedLeaseSession, nonatomic, readonly) bool delegatedLeaseSession;
@property (nonatomic, readonly, copy) NSDate *lastPlaybackRequestDate;
@property (nonatomic, readonly, copy) NSDate *leaseExpirationDate;
@property (nonatomic, readonly, copy) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;

+ (id)_sharedOperationQueue;

- (void).cxx_destruct;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(bool)arg2 delegate:(id)arg3 leaseStatus:(id)arg4;
- (void)_locked_handlePendingPlaybackLeaseDidEndPushNotificationIfReady;
- (void)_locked_performAutomaticRefresh;
- (void)_locked_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_locked_updateAutomaticRefreshProperties;
- (id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)beginAutomaticallyRefreshingLease;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endAutomaticallyRefreshingLease;
- (bool)isAutomaticallyRefreshingLease;
- (bool)isDelegatedLeaseSession;
- (id)lastPlaybackRequestDate;
- (id)leaseExpirationDate;
- (id)leaseStatus;
- (id)performPlaybackRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(id /* block */)arg1;
- (id)requestContext;

@end
