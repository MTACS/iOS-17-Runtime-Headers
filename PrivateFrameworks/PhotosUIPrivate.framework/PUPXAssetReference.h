
@interface PUPXAssetReference : PUAssetReference {
    PXAssetReference * _underlyingAssetReference;
}

@property (nonatomic, readonly) PXAssetReference *underlyingAssetReference;

- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithPXAssetReference:(id)arg1 dataSourceIdentifier:(id)arg2;
- (id)pxAssetReference;
- (id)underlyingAssetReference;

@end
