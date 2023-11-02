
@interface PUPXAssetsDataSource : PUAssetsDataSource {
    PXAssetsDataSource * _underlyingDataSource;
}

@property (nonatomic, readonly) PXAssetsDataSource *underlyingDataSource;

- (void).cxx_destruct;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)init;
- (id)initWithUnderlyingDataSource:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)underlyingDataSource;

@end
