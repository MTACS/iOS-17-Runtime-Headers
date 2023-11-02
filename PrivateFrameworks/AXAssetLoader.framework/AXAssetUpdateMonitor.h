
@interface AXAssetUpdateMonitor : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assetsLock;
    NSArray * _cachedInstalledAssets;
    AXDispatchTimer * _refreshDispatchTimer;
    NSHashTable * _updateObservers;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) AXAssetController *assetController;
@property (nonatomic, readonly) AXAssetPolicy *assetPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasInProgressDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;

+ (id)assetMonitorWithPolicy:(id)arg1;
+ (id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned int)arg2;
+ (id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned int)arg2 targetQueue:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithAssetPolicy:(id)arg1 qosClass:(unsigned int)arg2 targetQueue:(id)arg3;
- (void)_performWithinLock:(id /* block */)arg1;
- (id)_purgeUnneededAssetsFromInstalledAssets:(id)arg1;
- (void)_updateCachedInstalledAssets:(id)arg1;
- (void)_workerQueue_refreshAssetsAfterDelay:(double)arg1 canRefreshCatalog:(bool)arg2;
- (void)addUpdateObserver:(id)arg1;
- (id)assetController;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (id)assetPolicy;
- (id)description;
- (bool)hasInProgressDownloads;
- (void)logInfo:(id)arg1;
- (void)refreshAssetsAfterDelay:(double)arg1;
- (void)removeUpdateObserver:(id)arg1;
- (void)setAssetController:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (void)stop;
- (bool)userInitiated;

@end
