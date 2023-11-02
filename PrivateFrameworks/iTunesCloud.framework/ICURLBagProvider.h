
@interface ICURLBagProvider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _bagChangeNotificationReceivedForRequestContext;
    NSMutableDictionary * _cache;
    NSMutableSet * _cacheKeysScheduledForRefresh;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _pendingOperationsForCacheKey;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
    bool  _useAMSBag;
    bool  _useRawPayload;
}

@property (nonatomic) bool useAMSBag;
@property (nonatomic) bool useRawPayload;

+ (id)sharedBagProvider;

- (void).cxx_destruct;
- (id)_amsProcessInfoFromRequestContext:(id)arg1;
- (id)_cacheFilePath;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)arg1 forProfileName:(id)arg2;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_getCacheKeyForRequestContext:(id)arg1;
- (void)_handleAMSBagChangedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (id)_knownMissingBagValuesDictionary;
- (id)_legacyCacheFilePath;
- (void)_loadCache;
- (void)_saveCache;
- (void)dealloc;
- (void)getBagAndURLMetricsForRequestContext:(id)arg1 forceRefetch:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateCache;
- (void)setUseAMSBag:(bool)arg1;
- (void)setUseRawPayload:(bool)arg1;
- (bool)useAMSBag;
- (bool)useRawPayload;

@end
