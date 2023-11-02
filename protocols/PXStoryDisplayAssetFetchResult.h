
@protocol PXStoryDisplayAssetFetchResult <PXDisplayAssetFetchResult>

@required

- (const long long*)resourceIndexes;
- (PXStoryResourcesDataSource *)resourcesDataSource;
- (<PXStoryDisplayAsset> *)storyDisplayAssetAtIndex:(long long)arg1;

@end
