
@protocol PXBrowserSelectionSnapshot <NSObject>

@required

- (long long)assetCount;
- (id)assetReferenceAtIndex:(long long)arg1;
- (<PXDisplayAsset> *)displayAssetAtIndex:(long long)arg1;
- (long long)estimatedAssetCount;
- (long long)estimatedModelObjectsCount;
- (long long)indexOfAssetReference:(id)arg1;
- (long long)mediaType;
- (NSArray *)modelObjects;

@end
