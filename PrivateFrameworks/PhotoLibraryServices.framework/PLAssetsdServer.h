
@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate, PFStateCaptureProvider> {
    NSXPCInterface * _assetsdInterface;
    PLBackgroundJobService * _backgroundJobService;
    PLCacheDeleteRegistration * _cacheDeleteRegistration;
    PLXPCMessageLogger * _connectionLogger;
    PLDistributedNotificationHandler * _distributedNotificationHandler;
    bool  _isConfiguredForUnitTesting;
    PLPhotoLibraryBundleController * _libraryBundleController;
    NSXPCListener * _listener;
    struct { 
        _Atomic unsigned int imageCacheHitCount; 
        _Atomic unsigned int imageCacheMissCount; 
        _Atomic unsigned int videoComplementCacheHitCount; 
        _Atomic unsigned int videoComplementCacheMissCount; 
    }  _resourceCacheMetrics;
    <PLPhotoLibraryDaemonService> * _searchSpotlightReciever;
    NSMutableSet * _services;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _servicesLock;
    PFStateCaptureHandler * _stateHandler;
    <PLPhotoLibraryDaemonService> * _syndicationPreferencesListener;
    <PLPhotoLibraryDaemonService> * _syndicationSpotlightReceiver;
    int  _systemLibraryChangeToken;
    PLTCCObserver * _tccObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConfiguredForUnitTesting;
@property (nonatomic) struct { _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; } resourceCacheMetrics;
@property (nonatomic, retain) <PLPhotoLibraryDaemonService> *searchSpotlightReciever;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PLPhotoLibraryDaemonService> *syndicationPreferencesListener;
@property (nonatomic, retain) <PLPhotoLibraryDaemonService> *syndicationSpotlightReceiver;
@property (nonatomic) int systemLibraryChangeToken;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_checkInWithLaunchd;
- (void)_collectCacheMetricsDataFromService:(id)arg1;
- (void)_startObservingSystemLibraryChanges;
- (void)addService:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)handleInvalidation:(id)arg1;
- (id)init;
- (bool)isConfiguredForUnitTesting;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logStatus;
- (void)removeService:(id)arg1;
- (struct { _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; })resourceCacheMetrics;
- (id)searchSpotlightReciever;
- (void)setResourceCacheMetrics:(struct { _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; })arg1;
- (void)setSearchSpotlightReciever:(id)arg1;
- (void)setSyndicationPreferencesListener:(id)arg1;
- (void)setSyndicationSpotlightReceiver:(id)arg1;
- (void)setSystemLibraryChangeToken:(int)arg1;
- (void)start;
- (id)stateCaptureDictionary;
- (void)stopObservingSystemLibraryChanges;
- (id)syndicationPreferencesListener;
- (id)syndicationSpotlightReceiver;
- (int)systemLibraryChangeToken;

@end
