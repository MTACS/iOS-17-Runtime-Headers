
@interface AXAuditAssetManager : NSObject <AXAssetControllerObserver> {
    NSArray * __assetControllers;
    AXElementVisionModelAssetPolicy * __elementVisionModelAssetPolicy;
    AXIconVisionModelAssetPolicy * __iconVisionModelAssetPolicy;
}

@property (nonatomic, retain) NSArray *_assetControllers;
@property (nonatomic, retain) AXElementVisionModelAssetPolicy *_elementVisionModelAssetPolicy;
@property (nonatomic, retain) AXIconVisionModelAssetPolicy *_iconVisionModelAssetPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (void).cxx_destruct;
- (id)_assetControllers;
- (id)_elementVisionModelAssetPolicy;
- (id)_iconVisionModelAssetPolicy;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)downloadAssetsIfNecessary;
- (id)init;
- (void)set_assetControllers:(id)arg1;
- (void)set_elementVisionModelAssetPolicy:(id)arg1;
- (void)set_iconVisionModelAssetPolicy:(id)arg1;

@end
