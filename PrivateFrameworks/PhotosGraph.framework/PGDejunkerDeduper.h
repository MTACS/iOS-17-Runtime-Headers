
@interface PGDejunkerDeduper : NSObject {
    PLKMeansClustering * _kMeanTimeClusterer;
    NSObject<OS_os_log> * _loggingConnection;
    CLSSimilarStacker * _similarStacker;
}

@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)arg1 options:(id)arg2;
- (id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)arg1 forSimilarity:(long long)arg2 options:(id)arg3;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (id)debugPersonStringForItem:(id)arg1;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)dejunkedItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)eligibleItemsInItems:(id)arg1 options:(id)arg2;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (id)finalItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (double)identicalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (double)identicalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (id)identicallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithSimilarityModelClass:(Class)arg1;
- (bool)isJunkForItem:(id)arg1;
- (id)itemsByFeatureWithItems:(id)arg1;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)loggingConnection;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(bool*)arg3;
- (double)semanticalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (double)semanticalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (id)semanticallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)setLoggingConnection:(id)arg1;
- (bool)shouldPerformIdenticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (bool)shouldPerformSemanticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (id)splitItemGroupsWithItemGroups:(id)arg1 maximumNumberOfItemsPerGroup:(unsigned long long)arg2 debugInfo:(id)arg3;
- (id)splitItemGroupsWithTimeSortedItems:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
- (id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)arg1 timeInterval:(double)arg2 maximumTimeGroupExtension:(double)arg3;
- (id)timeSortedItemsWithItems:(id)arg1;

@end
