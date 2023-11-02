
@interface GEOProactiveTileDownloader : NSObject <GEOOpportunisticDataSourceDelegate> {
    GEOXPCActivity * _activity;
    geo_isolater * _activityIsolation;
    <GEOOpportunisticDataSource> * _currentDownloader;
    unsigned long long  _currentPolicy;
    NSObject<OS_dispatch_source> * _deferCheckinTimer;
    <GEOProactiveTileDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didFinish;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didStart;
    GEOTileDB * _diskCache;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    GEOResourceManifestManager * _manifestManager;
    bool  _policyEnabled;
    GEOPowerAssertion * _powerAssertion;
    NSMutableArray * _remainingPolicies;
    GEORequestCounter * _requestCounter;
    NSDictionary * _testDownloaders;
    NSDictionary * _testPolicyEnabledOverrides;
    NSMapTable * _tileRequesterClasses;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_canUseXPCActivity;
+ (unsigned long long)maximumDownloadBatchSize;
+ (bool)shouldDownloadTileType:(int)arg1;

- (void).cxx_destruct;
- (void)_clearPowerAssertion;
- (void)_clearXPCDeferralTimer;
- (void)_finish;
- (void)_pauseIfNecessary;
- (void)_registerXPCActivity;
- (void)_registerXPCDeferralTimer;
- (void)_start;
- (void)_startNextDownloader;
- (void)_takePowerAssertionIfNecessary;
- (void)_xpcActivityFired;
- (void)cancel;
- (void)dataSourceDidFinish:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 tileRequesterClasses:(id)arg4;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 tileRequesterClasses:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 downloaders:(id)arg7 policyEnabledOverrides:(id)arg8;
- (void)start;

@end
