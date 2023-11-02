
@interface PXSettingsMeaningMomentDataContainer : NSObject {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _curatedAssets;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *curatedAssets;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)curatedAssets;
- (id)initWithCuratedAssets:(id)arg1 assetCollection:(id)arg2;

@end
