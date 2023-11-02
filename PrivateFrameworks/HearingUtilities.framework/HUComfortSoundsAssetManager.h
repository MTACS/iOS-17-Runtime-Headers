
@interface HUComfortSoundsAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    NSMutableDictionary * _assetDownloadProgress;
    NSArray * _availableAssets;
    <HUComfortSoundsAssetManagerDelegate> * _delegate;
}

@property (nonatomic, retain) AXAssetController *assetController;
@property (nonatomic, copy) NSDictionary *assetDownloadProgress;
@property (nonatomic, retain) NSArray *availableAssets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUComfortSoundsAssetManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetController;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (id)assetDownloadProgress;
- (id)assetWithId:(id)arg1;
- (id)availableAssets;
- (id)delegate;
- (void)downloadAssetWithId:(id)arg1;
- (id)init;
- (void)refreshAssets;
- (void)removeAssetWithId:(id)arg1;
- (void)setAssetController:(id)arg1;
- (void)setAssetDownloadProgress:(id)arg1;
- (void)setAvailableAssets:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
