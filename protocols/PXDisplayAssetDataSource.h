
@protocol PXDisplayAssetDataSource <NSObject>

@required

- (<PXDisplayAsset> *)displayAssetAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForDisplayAsset:(id <PXDisplayAsset>)arg1 hintIndexPath:(NSIndexPath *)arg2;
- (long long)versionIdentifier;

@end
