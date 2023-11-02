
@interface AXSDVoiceTriggerAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    AXVoiceTriggerAssetPolicy * _assetPolicy;
    <AXSDVoiceTriggerAssetManagerDelegate> * _delegate;
    AXAsset * _latestDownloadedAsset;
}

@property (nonatomic, retain) AXAssetController *assetController;
@property (nonatomic, retain) AXVoiceTriggerAssetPolicy *assetPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDVoiceTriggerAssetManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXAsset *latestDownloadedAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetController;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetDidUpdateWithError:(id)arg1;
- (id)assetPolicy;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)latestDownloadedAsset;
- (void)setAssetController:(id)arg1;
- (void)setAssetPolicy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLatestDownloadedAsset:(id)arg1;

@end
