
@protocol PXContentSyndicationAssetFetchResultProvider <NSObject>

@required

- (<PXDisplayAssetFetchResult> *)assetFetchResultForAssetCollection:(id <PXDisplayAssetCollection>)arg1;
- (void)invalidateAllAssetFetchResults;
- (void)invalidateAssetFetchResultsInAssetCollections:(id <NSFastEnumeration>)arg1;
- (void)registerChangeObserver:(id <PXContentSyndicationAssetFetchResultProviderChangeObserver>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)unregisterChangeObserver:(id <PXContentSyndicationAssetFetchResultProviderChangeObserver>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;

@end
