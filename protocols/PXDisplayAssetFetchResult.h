
@protocol PXDisplayAssetFetchResult <PXSectionedFetchResult>

@required

- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (bool)containsObject:(id <PXDisplayAsset>)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (<PXDisplayAsset> *)firstObject;
- (<PXDisplayAsset> *)lastObject;
- (<PXDisplayAsset> *)objectAtIndex:(unsigned long long)arg1;
- (<PXDisplayAsset> *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (<PXDisplayThumbnailAsset> *)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
