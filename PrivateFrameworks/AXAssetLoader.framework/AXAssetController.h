
@interface AXAssetController : NSObject {
    AXAssetPolicy * _assetPolicy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assetsLock;
    NSArray * _cachedAvailableAssets;
    NSMutableSet * _cachedInProgressAssets;
    NSObject<OS_dispatch_queue> * _mobileAssetQueue;
    int  _notifyToken;
    NSHashTable * _observers;
    AXDispatchTimer * _refreshDispatchTimer;
    NSObject<OS_dispatch_queue> * _refreshQueue;
    bool  _shouldRefreshForAssetInstallNotifications;
    bool  _userInitiated;
}

@property (nonatomic, readonly) AXAssetPolicy *assetPolicy;
@property (nonatomic, readonly) bool hasInProgressDownloads;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mobileAssetQueue;
@property (nonatomic) bool shouldRefreshForAssetInstallNotifications;
@property (nonatomic) bool userInitiated;

+ (id)assetControllerWithPolicy:(id)arg1;
+ (id)assetControllerWithPolicy:(id)arg1 qosClass:(unsigned int)arg2;
+ (id)assetControllerWithPolicy:(id)arg1 qosClass:(unsigned int)arg2 shouldRefreshForAssetInstallNotifications:(bool)arg3;

- (void).cxx_destruct;
- (void)_deregisterForNotifications;
- (void)_handleAssetDownloadCompletion:(id)arg1 downloadResult:(long long)arg2;
- (void)_handleAssetDownloadStarted:(id)arg1;
- (void)_handleAssetProgressUpdate:(id)arg1 progressNotification:(id)arg2;
- (id)_initWithAssetPolicy:(id)arg1 qosClass:(unsigned int)arg2 shouldRefreshForAssetInstallNotifications:(bool)arg3;
- (void)_queue_downloadAssets:(id)arg1 successStartBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)_queue_purgeAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_refreshAssets:(bool)arg1 completion:(id /* block */)arg2;
- (void)_queue_updateDownloadPriorityIfNecessary;
- (void)_refreshQueue_refreshAssets:(bool)arg1 completion:(id /* block */)arg2;
- (void)_registerForNotifications;
- (void)_replaceCachedAssetsWithAssets:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateCatalogWithOverrideTimeout:(id)arg1 completion:(id /* block */)arg2;
- (void)addInProgressAsset:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)assetPolicy;
- (void)dealloc;
- (id)description;
- (void)downloadAssets:(id)arg1 successStartBlock:(id /* block */)arg2;
- (void)downloadAssets:(id)arg1 successStartBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)getCachedAvailableAssets:(id /* block */)arg1;
- (void)getCachedDownloadedAssets:(id /* block */)arg1;
- (bool)hasInProgressDownloads;
- (bool)isAssetCatalogInstalled;
- (id)mobileAssetQueue;
- (void)performBlockOnAssetObservers:(id /* block */)arg1;
- (void)performWithinLock:(id /* block */)arg1;
- (void)purgeAssets:(id)arg1;
- (void)purgeAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeAssetsSynchronously:(id)arg1;
- (void)purgeInMemoryCachedAssets;
- (void)refreshAssetsByForceUpdatingCatalog:(bool)arg1 updatingCatalogIfNeeded:(bool)arg2;
- (void)refreshAssetsByForceUpdatingCatalog:(bool)arg1 updatingCatalogIfNeeded:(bool)arg2 catalogRefreshOverrideTimeout:(id)arg3;
- (void)refreshAssetsByForceUpdatingCatalog:(bool)arg1 updatingCatalogIfNeeded:(bool)arg2 catalogRefreshOverrideTimeout:(id)arg3 completion:(id /* block */)arg4;
- (id)refreshAssetsWithAttributesSynchronously:(id)arg1 installedOnly:(bool)arg2;
- (id)refreshInstalledAssetsSynchronously;
- (id)refreshWithoutCatalogUpdateSynchronously;
- (void)removeInProgressAsset:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setProductionServerURL;
- (void)setShouldRefreshForAssetInstallNotifications:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)shouldRefreshForAssetInstallNotifications;
- (void)stopDownloadAsset:(id)arg1 completion:(id /* block */)arg2;
- (bool)userInitiated;

@end
