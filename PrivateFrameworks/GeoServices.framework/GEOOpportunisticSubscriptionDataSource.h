
@interface GEOOpportunisticSubscriptionDataSource : NSObject <GEOMapDataSubscriptionDownloaderDelegate, GEOOpportunisticDataSource> {
    unsigned long long  _bytesDownloaded;
    bool  _canceled;
    GEOMapDataSubscriptionDownloader * _currentDownloader;
    unsigned long long  _currentSubscriptionIndex;
    <GEOOpportunisticDataSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    GEOTileDB * _diskCache;
    unsigned long long  _failedTiles;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _numberOfTilesAttempted;
    unsigned long long  _numberOfTilesOriginallyConsidered;
    bool  _paused;
    NSObject<OS_dispatch_group> * _preparationGroup;
    GEORequestCounter * _requestCounter;
    unsigned char  _requestCounterPolicy;
    NSString * _sessionIdentifier;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _started;
    GEOMapDataSubscriptionManager * _subscriptionManager;
    NSArray * _subscriptionsToLoad;
    unsigned long long  _successfulTiles;
    id /* block */  _tileRequesterCreationBlock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) unsigned long long bytesDownloaded;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOOpportunisticDataSourceDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)policy;

- (void).cxx_destruct;
- (void)_finish;
- (void)_startNextSubscriptionIfPossible;
- (unsigned long long)bytesDownloaded;
- (void)cancel;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionIdentifier:(id)arg1 diskCache:(id)arg2 subscriptionManager:(id)arg3 manifestManager:(id)arg4 requestCounter:(id)arg5 requestCounterPolicy:(unsigned char)arg6 tileRequesterCreationBlock:(id /* block */)arg7;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)subscriptionDownloader:(id)arg1 didFinishWithError:(id)arg2;

@end
