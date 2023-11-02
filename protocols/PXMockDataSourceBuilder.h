
@protocol PXMockDataSourceBuilder <NSObject>

@required

- (void)appendMockDisplayAssetSectionWithCount:(long long)arg1 assetProperties:(NSDictionary *)arg2 assetCollection:(id <PXDisplayAssetCollection>)arg3;
- (void)appendMockDisplayAssetsWithCount:(long long)arg1 assetProperties:(NSDictionary *)arg2;

@end
