
@interface PLFrequentLocationProcessor : NSObject

+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(id /* block */)arg4;
+ (id)_coarseClustersForItems:(id)arg1 progressBlock:(id /* block */)arg2;
+ (double)_computeWeekendFrequencyForMoments:(id)arg1;
+ (id)_finalClustersFromCoarseClusters:(id)arg1 progressBlock:(id /* block */)arg2;
+ (id)processFrequentLocationsWithItemSubset:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)processFrequentLocationsWithSortedMoments:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)processLegacyFrequentLocationsWithSortedItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)sortDescriptorsForLocationsOfInterest;

@end
