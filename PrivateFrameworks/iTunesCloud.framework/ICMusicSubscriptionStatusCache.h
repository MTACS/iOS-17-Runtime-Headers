
@interface ICMusicSubscriptionStatusCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICMusicSubscriptionStatusCacheKey * _baseCacheKey;
    NSMutableDictionary * _cachedSubscriptionStatusResponses;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _isPhoneNumberAccessRestricted;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_getCacheKeyForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleActiveAccountDidChangeNotification:(id)arg1;
- (void)_handlePhoneNumberDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)arg1;
- (void)_persistCachePostingGlobalNotification:(bool)arg1;
- (void)_postLocalChangeNotificationWithUserInfo:(id)arg1;
- (id)_statusChangeUserInfoForUserIdentity:(id)arg1 oldStatus:(id)arg2 newStatus:(id)arg3;
- (void)dealloc;
- (void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(id /* block */)arg1;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateBaseCacheKey;

@end
