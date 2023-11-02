
@interface PLCloudResourcePrefetchPredicates : NSObject

+ (id)_assetIsUnadjustedPredicate;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetPredicates:(id)arg2 additionalResourcePredicates:(id)arg3 options:(id)arg4;
+ (id)_excludeMomentShareAssetsPredicate;
+ (id)_irisConditionPredicate;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetPredicates:(id)arg2 additionalResourcePredicates:(id)arg3 options:(id)arg4;
+ (id)_missingThumbnailPredicate;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)_predicateForMaxFilesize:(unsigned long long)arg1;
+ (id)_predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)_predicateToPrefetchMemoryKeyAssets:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
+ (id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
+ (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2 options:(id)arg3;
+ (double)_resourceLastPrunedPrefetchTimeInterval;
+ (id)_resourcesToPrefetchForAsset:(id)arg1 options:(id)arg2;
+ (id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:(bool)arg1;
+ (id)predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;
+ (id)predicatesForMemories:(id)arg1 photoLibrary:(id)arg2;
+ (id)predicatesForNonThumbnails:(id)arg1 lastCompletePrefetchDate:(id)arg2;
+ (id)predicatesForOriginalResources:(id)arg1 additionalResourcePredicates:(id)arg2;
+ (id)predicatesForThumbnails:(id)arg1;
+ (id)predicatesForWidget:(id)arg1 photoLibrary:(id)arg2;

@end
