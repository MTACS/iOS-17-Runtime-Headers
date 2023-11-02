
@protocol GEOMapDataSubscriptionDownloadManager <NSObject>

@required

- (void)cancelDownloadForSubscriptionIdentifiers:(NSArray *)arg1;
- (<GEOMapDataSubscriptionDownloadManagerDelegate> *)delegate;
- (<GEOCancellable> *)determineEstimatedSizeForSubscriptionWithRegion:(void *)arg1 dataTypes:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: GEOMapRegion *, unsigned long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchStateForSubscriptionWithIdentifier:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMapDataSubscriptionState *, NSError *, void*
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2;
- (void)setDelegate:(id <GEOMapDataSubscriptionDownloadManagerDelegate>)arg1;
- (void)startDownloadForSubscriptionIdentifiers:(NSArray *)arg1 mode:(unsigned long long)arg2;

@optional

- (void)didAddSubscription:(GEOMapDataSubscription *)arg1;
- (void)didRemoveSubscriptionWithIdentifier:(NSString *)arg1;
- (void)externallyManagedDownloaderDidFinish:(GEOMapDataSubscriptionDownloader *)arg1 withError:(NSError *)arg2;
- (void)registerExternallyManagedDownloader:(GEOMapDataSubscriptionDownloader *)arg1;
- (void)runAutomaticOfflineDataXPCActivity;
- (void)runRetryOfflineDownloadXPCActivity:(bool)arg1;

@end
