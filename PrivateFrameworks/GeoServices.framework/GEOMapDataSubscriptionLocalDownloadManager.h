
@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOMapDataSubscriptionDownloadGroupDelegate, GEOMapDataSubscriptionDownloadManager, GEOMapDataSubscriptionDownloaderDelegate, GEOOfflineDataConfigurationObserver, GEOPListStateCapturing> {
    GEOMapDataSubscriptionDownloader * _currentDownloader;
    GEOMapDataSubscriptionUpdateSession * _currentUpdateSession;
    GEOOfflineDataConfiguration * _dataConfiguration;
    <GEOMapDataSubscriptionDownloadManagerDelegate> * _delegate;
    geo_isolater * _isolation;
    GEOResourceManifestManager * _manifestManager;
    GEOOfflineDataSizeEstimationServiceRequester * _offlineDataSizeEstimationRequester;
    GEOXPCActivity * _offlineInexpensiveDownloadActivity;
    GEOMapDataSubscriptionDownloadGroup * _offlineInexpensiveDownloadGroup;
    GEOXPCActivity * _offlineRetryFailedActivity;
    GEOMapDataSubscriptionDownloadGroup * _offlineRetryFailedDownloadGroup;
    GEOXPCActivity * _offlineUpdateActivity;
    NSMutableArray * _pendingSubscriptionsToLoad;
    unsigned long long  _stateCaptureHandle;
    NSMutableDictionary * _subscriptionStates;
    GEOTileDB * _tileDB;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOMapDataSubscriptionDownloadManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_xpcActivityClass;

- (void).cxx_destruct;
- (id)_createDownloaderForSubscription:(id)arg1 mode:(unsigned long long)arg2;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)didAddSubscription:(id)arg1;
- (void)didAddSubscription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didRemoveSubscriptionWithIdentifier:(id)arg1;
- (void)externallyManagedDownloaderDidFinish:(id)arg1 withError:(id)arg2;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2;
- (id)initWithTileDB:(id)arg1 dataConfiguration:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)offlineDataConfiguration:(id)arg1 didChangeUpdateAvailability:(bool)arg2;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (void)registerExternallyManagedDownloader:(id)arg1;
- (void)runAutomaticOfflineDataXPCActivity;
- (void)runRetryOfflineDownloadXPCActivity:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2;
- (void)subscriptionDownloadGroupDidDefer:(id)arg1;
- (void)subscriptionDownloader:(id)arg1 didFinishWithError:(id)arg2;
- (void)subscriptionDownloader:(id)arg1 willUseOfflineDataVersions:(id)arg2 completionHandler:(id /* block */)arg3;

@end
