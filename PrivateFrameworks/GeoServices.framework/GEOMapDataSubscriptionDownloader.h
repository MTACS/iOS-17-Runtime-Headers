
@interface GEOMapDataSubscriptionDownloader : NSObject <GEOMapDataSubscriptionDataDownloaderDelegate, GEOMapDataSubscriptionOfflineDownloaderDelegate, NSProgressReporting> {
    bool  _canceled;
    <GEOMapDataSubscriptionDataDownloader> * _currentDownloader;
    <GEOMapDataSubscriptionDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    GEOTileDB * _diskCache;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    GEOResourceManifestManager * _manifestManager;
    bool  _paused;
    GEOPowerAssertion * _powerAssertion;
    NSProgress * _progress;
    NSMutableArray * _remainingDownloaders;
    GEOMapDataSubscription * _subscription;
    GEOMapDataSubscriptionTileDownloader * _tileDownloader;
    long long  _updateType;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) unsigned long long bytesDownloaded;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEOMapDataSubscriptionDownloaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long failedTiles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfTilesAttempted;
@property (nonatomic, readonly) unsigned long long numberOfTilesConsidered;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) GEOMapDataSubscription *subscription;
@property (nonatomic, readonly) unsigned long long successfulTiles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (unsigned long long)bytesDownloaded;
- (void)cancel;
- (id)delegate;
- (void)downloader:(id)arg1 didFinishWithError:(id)arg2;
- (unsigned long long)failedTiles;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 reason:(unsigned char)arg5 requestOptions:(unsigned long long)arg6 manifestManager:(id)arg7 log:(id)arg8 logPrefix:(id)arg9 tileRequesterCreationBlock:(id /* block */)arg10 tileDownloader:(id)arg11 offlineDownloader:(id)arg12 updateType:(long long)arg13;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 reason:(unsigned char)arg5 requestOptions:(unsigned long long)arg6 manifestManager:(id)arg7 log:(id)arg8 logPrefix:(id)arg9 tileRequesterCreationBlock:(id /* block */)arg10 tileDownloader:(id)arg11 offlineDownloader:(id)arg12 updateType:(long long)arg13 dataTypeMask:(unsigned long long)arg14;
- (unsigned long long)numberOfTilesAttempted;
- (unsigned long long)numberOfTilesConsidered;
- (void)offlineDownloader:(id)arg1 willUseDataVersions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)pause;
- (id)progress;
- (void)resume;
- (id)subscription;
- (unsigned long long)successfulTiles;

@end
