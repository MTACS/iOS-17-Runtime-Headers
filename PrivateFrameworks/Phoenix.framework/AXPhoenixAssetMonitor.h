
@interface AXPhoenixAssetMonitor : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    AXPhoenixAssetPolicy * _assetPolicy;
    <AXPhoenixAssetMonitorDelegate> * _delegate;
    AXAsset * _latestAsset;
}

@property (nonatomic, retain) AXAssetController *assetController;
@property (nonatomic, retain) AXPhoenixAssetPolicy *assetPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXPhoenixAssetMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXAsset *latestAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetController;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetDidUpdate;
- (id)assetPolicy;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)latestAsset;
- (void)setAssetController:(id)arg1;
- (void)setAssetPolicy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLatestAsset:(id)arg1;

@end
