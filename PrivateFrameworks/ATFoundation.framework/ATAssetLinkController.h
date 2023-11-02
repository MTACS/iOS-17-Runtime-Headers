
@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate, ICEnvironmentMonitorObserver> {
    MSVXPCTransaction * _activeDownLoadsKeepAliveTransaction;
    NSMutableDictionary * _activeTrackAssetsByAssetType;
    NSMutableOrderedSet * _assetLinks;
    NSMutableOrderedSet * _assetQueue;
    NSMapTable * _assetsToFailedLinks;
    NSMapTable * _assetsToLinks;
    unsigned long long  _cachedThermalLevel;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _currentNetworkIsCellularType;
    bool  _isNetworkConstrained;
    NSMutableDictionary * _nonTrackAssetsPendingInstallByAssetType;
    NSHashTable * _observers;
    NSMutableDictionary * _progressBlocksForAssetsInFlight;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _trackAssetsPendingInstallByAssetType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addFailedLink:(id)arg1 forAsset:(id)arg2;
- (bool)_assetIsEnqueued:(id)arg1;
- (void)_assetsDidChange;
- (bool)_canEnqueueAsset:(id)arg1;
- (bool)_canEnqueueAsset:(id)arg1 onLink:(id)arg2;
- (void)_cancelAssets:(id)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (unsigned long long)_getMaxThermalPressureThreshold;
- (void)_handleEnqueue:(id)arg1 onLink:(id)arg2 withPriority:(bool)arg3;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)_prioritizeAsset:(id)arg1 onLinkClass:(Class)arg2;
- (bool)_shouldReleaseKeepAliveTransaction;
- (void)_updateCountsForFinishedTrackAssetTypes:(id)arg1;
- (void)addAssetLink:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAssetLinks;
- (id)allAssets;
- (bool)assetIsEnqueued:(id)arg1;
- (void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(bool)arg4;
- (void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(bool)arg4 cancelPendingAssetsInBatch:(bool)arg5;
- (void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3;
- (void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
- (void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
- (void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2;
- (void)assetLinkDidChange:(id)arg1;
- (void)cancelAllAssetsMatchingPredicate:(id)arg1 excludeActiveDownloads:(bool)arg2 withError:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelAssets:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelAssets:(id)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)dispatchBlockOnControllerQueue:(id /* block */)arg1;
- (void)enqueueAssetForStoreDownload:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)enqueueAssets:(id)arg1;
- (void)enqueueAssets:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)environmentMonitorDidChangeThermalLevel:(id)arg1;
- (id)filteredAssetsToDownloadForAssets:(id)arg1;
- (id)init;
- (void)installCompleteForAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (void)prioritizeAssetWithStoreForLibraryIdentifier:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)removeAssetLink:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setPendingAssets:(id)arg1;

@end
