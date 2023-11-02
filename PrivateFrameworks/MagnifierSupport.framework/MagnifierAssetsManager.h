
@interface MagnifierAssetsManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    bool  _assetDownloadFailed;
    NSDictionary * _assetDownloadPercent;
    AXMagnifierAssetPolicy * _assetPolicy;
    NSArray * _assetsNeedingDownload;
    NSArray * _cachedAssets;
    NSArray * _cachedDownloadableAssets;
    <MagnifierAssetsManagerDelegate> * _delegate;
    bool  _didTryWaitingForAssetLookup;
    NSDictionary * _doorAttributesAssetProperties;
    NSURL * _doorAttributesBaseURL;
    NSDictionary * _expectedDownloadSizes;
    AXAssetController * _imageCaptionAssetController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _signDetectorAssetProperties;
    NSURL * _signDetectorBaseURL;
    NSDictionary * _totalInstalledSizes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MagnifierAssetsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *doorAttributesAssetProperties;
@property (nonatomic, copy) NSURL *doorAttributesBaseURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *signDetectorAssetProperties;
@property (nonatomic, copy) NSURL *signDetectorBaseURL;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_modelURLForType:(unsigned long long)arg1 baseURL:(id)arg2;
- (void)_performWithLock:(id /* block */)arg1;
- (void)_updateAsset:(id)arg1;
- (void)_updateDownloadedValuesForAsset:(id)arg1;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (bool)assetDownloadFailed;
- (id)assetPropertiesForModelType:(unsigned long long)arg1;
- (id)baseURLForType:(unsigned long long)arg1;
- (id)delegate;
- (id)doorAttributesAssetProperties;
- (id)doorAttributesBaseURL;
- (id)downloadAssetsWithName:(id)arg1;
- (void)downloadImageCaptionAssets;
- (id)init;
- (void)manageImageCaptionModelAssets:(id)arg1;
- (id)modelURLForType:(unsigned long long)arg1 timeout:(double)arg2;
- (void)refreshAssets;
- (void)setDelegate:(id)arg1;
- (void)setDoorAttributesAssetProperties:(id)arg1;
- (void)setDoorAttributesBaseURL:(id)arg1;
- (void)setSignDetectorAssetProperties:(id)arg1;
- (void)setSignDetectorBaseURL:(id)arg1;
- (id)signDetectorAssetProperties;
- (id)signDetectorBaseURL;
- (double)totalDownloadedWithName:(id)arg1;
- (long long)totalSizeExpectedWithName:(id)arg1;
- (long long)totalSizeOccupiedWithName:(id)arg1;

@end
