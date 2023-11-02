
@interface GEOMapDataSubscriptionManager : NSObject <GEOMapDataSubscriptionDownloadManagerDelegate> {
    <GEOMapDataSubscriptionDownloadManager> * _downloadManager;
    <GEOMapDataSubscriptionPersistence> * _persistence;
    GEOObserverHashTable * _stateObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setSharedManagerUseLocalPersistence:(bool)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addStateObserver:(id)arg1;
- (void)_addSubscriptionWithIdentifier:(id)arg1 auditToken:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 region:(id)arg5 displayName:(id)arg6 expirationDate:(id)arg7 callbackQueue:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)_calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_externallyManagedDownloaderDidFinish:(id)arg1 withError:(id)arg2;
- (void)_fetchFullyDownloadedSubscriptionsOfType:(unsigned long long)arg1 includeOutOfDate:(bool)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_registerExternallyManagedDownloader:(id)arg1;
- (void)_removeStateObserver:(id)arg1;
- (void)_runAutomaticOfflineDataXPCActivity;
- (void)_runRetryOfflineDownloadXPCActivity:(bool)arg1;
- (void)addSubscriptionWithIdentifier:(id)arg1 dataTypes:(unsigned long long)arg2 policy:(long long)arg3 region:(id)arg4 displayName:(id)arg5 expirationDate:(id)arg6 callbackQueue:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)addSubscriptionWithIdentifier:(id)arg1 dataTypes:(unsigned long long)arg2 policy:(long long)arg3 region:(id)arg4 expirationDate:(id)arg5 callbackQueue:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)cancelDownloadForSubscriptionIdentifier:(id)arg1;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)downloadManager:(id)arg1 didUpdateState:(id)arg2 forIdentifier:(id)arg3;
- (void)fetchAllExpiredSubscriptionsWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllSubscriptionsWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2;
- (id)init;
- (id)initWithPersistence:(id)arg1 downloadManager:(id)arg2;
- (void)removeSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startDownloadForSubscriptionIdentifier:(id)arg1 mode:(unsigned long long)arg2;
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2;

@end
