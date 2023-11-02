
@interface PXSearchResultsAssetCurator : NSObject

+ (id)_assetsCuratedForDominancyFromCuratedObjects:(id)arg1 momentUUIDsByAssetUUIDs:(id)arg2 curatedAssetLimit:(unsigned long long)arg3;
+ (void)_curationObjectsFromAssets:(id)arg1 scenesMap:(id)arg2 sceneIdentifiers:(id)arg3 sceneTaxonomyProvider:(id)arg4 completion:(id /* block */)arg5;
+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;
+ (id)_fetchResultForCuratedAssets:(id)arg1;
+ (id)_momentUUIDsByAssetUUIDsFromAssetCurationObjects:(id)arg1;
+ (id)_sampledAssetUUIDsFromAssetResults:(id)arg1 curatedAssetLimit:(unsigned long long)arg2 priorityAssetUUID:(id)arg3 maxNumberToSample:(unsigned long long)arg4 rangeToSample:(unsigned long long)arg5;
+ (id)_sortedCuratedAssetsFromCurationObjects:(id)arg1 priorityAssetUUID:(id)arg2 curatedAssetLimit:(unsigned long long)arg3 shouldPrioritizeDominantObjectResults:(bool)arg4;
+ (void)performCurationForAssetResults:(id)arg1 sceneIdentifiers:(id)arg2 searchQuery:(id)arg3 sceneTaxonomyProvider:(id)arg4 completion:(id /* block */)arg5;

@end
