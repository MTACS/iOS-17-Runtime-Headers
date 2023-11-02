
@interface AIAudiogramAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    <AIAudiogramAssetManagerDelegate> * _delegate;
    AXAsset * _latestDownloadedAsset;
}

@property (nonatomic, retain) AXAssetController *assetController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AIAudiogramAssetManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXAsset *latestDownloadedAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetController;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetDidUpdateWithError:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)latestDownloadedAsset;
- (void)refreshAssets;
- (void)setAssetController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLatestDownloadedAsset:(id)arg1;

@end
