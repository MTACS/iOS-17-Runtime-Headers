
@interface IMHandleAvailabilityManager : NSObject <SKStatusSubscriptionServiceDelegate> {
    long long  _currentCacheGeneration;
    NSMutableDictionary * _currentSubscriptionCache;
    NSMutableDictionary * _lastKnownSubscriptionCache;
    NSMutableSet * _pendingFetchesForCacheKeys;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    SKStatusSubscriptionService * _subscriptionService;
}

@property (nonatomic) long long currentCacheGeneration;
@property (nonatomic, retain) NSMutableDictionary *currentSubscriptionCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *lastKnownSubscriptionCache;
@property (nonatomic, retain) NSMutableSet *pendingFetchesForCacheKeys;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic, retain) SKStatusSubscriptionService *subscriptionService;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_availablityFromStatusSubscription:(id)arg1 handleID:(id)arg2;
- (id)_cachedStatusSubscriptionForIMHandle:(id)arg1 fromCache:(id)arg2 cacheDescription:(id)arg3 cacheMiss:(bool*)arg4;
- (void)_clearCurrentSubscriptionCache;
- (void)_fetchUpdatedStatusForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)_postNotificationForUpdatedStatusWithSubscription:(id)arg1;
- (id)_skHandleForIMHandle:(id)arg1;
- (id)_skHandleForString:(id)arg1;
- (id)_subscriptionCacheKeyForHandle:(id)arg1;
- (long long)availabilityForHandle:(id)arg1;
- (id)availabilityStatusPublishedDateForHandle:(id)arg1;
- (void)beginObservingAvailabilityForHandle:(id)arg1;
- (long long)currentCacheGeneration;
- (id)currentSubscriptionCache;
- (void)endObservingAvailabilityForHandle:(id)arg1;
- (void)fetchPersonalAvailabilityWithCompletion:(id /* block */)arg1;
- (void)fetchUpdatedStatusAndUpdateCachesForHandle:(id)arg1 lastKnownStatus:(id)arg2;
- (id)init;
- (id)lastKnownSubscriptionCache;
- (id)pendingFetchesForCacheKeys;
- (id)privateWorkQueue;
- (void)setCurrentCacheGeneration:(long long)arg1;
- (void)setCurrentSubscriptionCache:(id)arg1;
- (void)setLastKnownSubscriptionCache:(id)arg1;
- (void)setPendingFetchesForCacheKeys:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setSubscriptionService:(id)arg1;
- (id)statusSubscriptionForHandle:(id)arg1;
- (void)subscriptionInvitationReceived:(id)arg1;
- (void)subscriptionReceivedStatusUpdate:(id)arg1;
- (id)subscriptionService;
- (void)subscriptionServiceDaemonDisconnected:(id)arg1;
- (void)subscriptionStateChanged:(id)arg1;

@end
