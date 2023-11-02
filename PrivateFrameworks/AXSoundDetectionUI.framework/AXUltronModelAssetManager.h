
@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    NSObject<OS_dispatch_queue> * _assetDownloadQueue;
    NSMutableDictionary * _assetDownloadStalled;
    NSMutableDictionary * _assetsDownloading;
    NSMutableDictionary * _assetsTotalBytesWritten;
    NSMutableDictionary * _assetsTotalTimeExpected;
    NSMutableArray * _cachedAXAssets;
    NSMutableDictionary * _cachedAssets;
    long long  _expectedDownloadSize;
    NSMutableArray * _observers;
    long long  _previousReportedSize;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetDownloadQueue;
@property (nonatomic, retain) NSMutableArray *cachedAXAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long expectedDownloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long previousReportedSize;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cacheAsset:(id)arg1;
- (void)_downloadAssets;
- (long long)_expectedCurrentlyDownloadingSize;
- (void)_resetDownloadTracking;
- (long long)_totalBytesOfAllAssetsWritten;
- (long long)_totalExpectedTimeOfAllAssets;
- (void)_updateDownloadingAsset:(id)arg1 totalBytesWritten:(long long)arg2 isStalled:(bool)arg3 expectedTimeRemaining:(double)arg4;
- (void)addObserver:(id)arg1;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (id)assetDownloadQueue;
- (long long)assetStatus;
- (id)cachedAXAssets;
- (void)downloadAssets:(id)arg1;
- (long long)expectedDownloadSize;
- (bool)hasInProgressDownloads;
- (id)init;
- (bool)isAssetCatalogInstalled;
- (bool)isAssetDownloadStalled;
- (bool)isKShotAsset:(id)arg1;
- (bool)isKShotUsingSoundPrint;
- (id)localPathForKShotGeneralApplianceDetector;
- (id)localPathForKShotHallucinator;
- (id)localPathForKShotModelWeights;
- (id)localURLForDetector:(id)arg1;
- (void)notifyAssetsNotReady;
- (void)notifyAssetsReady;
- (void)notifyAssetsState;
- (void)notifyDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 totalRemainingTime:(double)arg3 isStalled:(bool)arg4;
- (void)notifyRefreshAssets:(id)arg1 wasSuccessful:(bool)arg2 error:(id)arg3;
- (long long)previousReportedSize;
- (void)purgeAssets:(id)arg1;
- (void)refresh;
- (void)refreshAssetsUpdatingCatalogIfNeeded:(bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAssetDownloadQueue:(id)arg1;
- (void)setCachedAXAssets:(id)arg1;
- (void)setExpectedDownloadSize:(long long)arg1;
- (void)setPreviousReportedSize:(long long)arg1;
- (void)stopDownloadingAssets;
- (long long)totalSizeExpected;
- (long long)totalSizeOccupied;

@end
