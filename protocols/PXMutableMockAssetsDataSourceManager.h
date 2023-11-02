
@protocol PXMutableMockAssetsDataSourceManager <NSObject>

@required

- (void)changeItemAtIndexPath:(NSIndexPath *)arg1 toAssetProperties:(NSDictionary *)arg2;
- (void)changeSectionAtIndex:(long long)arg1 toAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)insertItemAtIndexPath:(NSIndexPath *)arg1 assetProperties:(NSDictionary *)arg2;
- (void)insertSectionAtIndex:(long long)arg1 count:(long long)arg2 assetProperties:(NSDictionary *)arg3 assetCollection:(id <PXDisplayAssetCollection>)arg4;
- (void)markChangeAsReload;
- (void)removeItemAtIndexPath:(NSIndexPath *)arg1;
- (void)removeSectionAtIndex:(long long)arg1;

@end
