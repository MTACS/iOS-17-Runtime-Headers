
@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource {
    NSCache * __assetReferenceByIndexPathCache;
    PUAssetsDataSource * __originalDataSource;
    NSDictionary * __substitutedAssetsByUUID;
}

@property (nonatomic, readonly) NSCache *_assetReferenceByIndexPathCache;
@property (nonatomic, readonly) PUAssetsDataSource *_originalDataSource;
@property (nonatomic, readonly) NSDictionary *_substitutedAssetsByUUID;

- (void).cxx_destruct;
- (id)_assetReferenceByIndexPathCache;
- (id)_originalDataSource;
- (id)_substitutedAssetsByUUID;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)identifier;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithDataSource:(id)arg1 substitutedAssets:(id)arg2;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;

@end
