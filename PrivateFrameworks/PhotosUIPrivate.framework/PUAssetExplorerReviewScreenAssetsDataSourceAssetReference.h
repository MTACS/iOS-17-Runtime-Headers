
@interface PUAssetExplorerReviewScreenAssetsDataSourceAssetReference : PUAssetReference {
    PUAssetReference * _originalAssetReference;
}

@property (nonatomic, readonly) PUAssetReference *originalAssetReference;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalAssetReference:(id)arg1 asset:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)originalAssetReference;

@end
