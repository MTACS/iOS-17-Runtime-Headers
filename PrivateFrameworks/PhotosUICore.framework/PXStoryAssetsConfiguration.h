
@interface PXStoryAssetsConfiguration : NSObject {
    <PXDisplayAssetFetchResult> * _allAssets;
    <PXDisplayAssetFetchResult> * _curatedAssets;
    <PXDisplayAsset> * _keyAsset;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *allAssets;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *curatedAssets;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;

- (void).cxx_destruct;
- (id)allAssets;
- (id)curatedAssets;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithKeyAsset:(id)arg1 curatedAssets:(id)arg2 allAssets:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyAsset;

@end
