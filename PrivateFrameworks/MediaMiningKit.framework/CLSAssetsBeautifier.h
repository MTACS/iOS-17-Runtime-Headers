
@interface CLSAssetsBeautifier : NSObject {
    bool  _discardNonEligibleClustersInSampling;
    bool  _enableFinalNaturalClustering;
    bool  _enableFinalTimeClustering;
    bool  _enableIntermediateNaturalClustering;
    bool  _enableNetworkAccess;
    bool  _enableStatisticalSampling;
    NSSet * _identifiersOfEligibleItems;
    NSSet * _identifiersOfRequiredItems;
    NSObject<OS_os_log> * _loggingConnection;
    CLSSimilarStacker * _similarStacker;
    bool  _usesKMeans;
}

@property (nonatomic) bool discardNonEligibleClustersInSampling;
@property (nonatomic) bool enableFinalNaturalClustering;
@property (nonatomic) bool enableFinalTimeClustering;
@property (nonatomic) bool enableIntermediateNaturalClustering;
@property (nonatomic) bool enableNetworkAccess;
@property (nonatomic) bool enableStatisticalSampling;
@property (nonatomic, copy) NSSet *identifiersOfEligibleItems;
@property (nonatomic, copy) NSSet *identifiersOfRequiredItems;
@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) bool usesKMeans;

+ (id)beautifier;

- (void).cxx_destruct;
- (id)_clustersBySplittingZeroDiameterClustersInClusters:(id)arg1 targetingNumberOfClusters:(unsigned long long)arg2;
- (id)_naturalClusteringBestItemInItems:(id)arg1;
- (id)_naturalClusteringWithItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(bool)arg3 debugInfo:(id)arg4;
- (id)bestItemInItems:(id)arg1;
- (id)deduplicateItems:(id)arg1 debugInfo:(id)arg2;
- (id)deduplicateItems:(id)arg1 withDuration:(double)arg2 andSimilarity:(long long)arg3 debugInfo:(id)arg4;
- (bool)discardNonEligibleClustersInSampling;
- (bool)enableFinalNaturalClustering;
- (bool)enableFinalTimeClustering;
- (bool)enableIntermediateNaturalClustering;
- (bool)enableNetworkAccess;
- (bool)enableStatisticalSampling;
- (id /* block */)hierarchicalClusteringDistanceBlock;
- (id)identifiersOfEligibleItems;
- (id)identifiersOfRequiredItems;
- (id)initWithSimilarityModelClass:(Class)arg1;
- (bool)itemIsRequired:(id)arg1;
- (id)loggingConnection;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 progressBlock:(id /* block */)arg3;
- (id)rankSimilarItems:(id)arg1;
- (id)requiredItemsInItems:(id)arg1;
- (id)sampledItemsInSortedItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)setDiscardNonEligibleClustersInSampling:(bool)arg1;
- (void)setEnableFinalNaturalClustering:(bool)arg1;
- (void)setEnableFinalTimeClustering:(bool)arg1;
- (void)setEnableIntermediateNaturalClustering:(bool)arg1;
- (void)setEnableNetworkAccess:(bool)arg1;
- (void)setEnableStatisticalSampling:(bool)arg1;
- (void)setIdentifiersOfEligibleItems:(id)arg1;
- (void)setIdentifiersOfRequiredItems:(id)arg1;
- (void)setLoggingConnection:(id)arg1;
- (void)setUsesKMeans:(bool)arg1;
- (id)sortedItemsWithItems:(id)arg1;
- (id /* block */)timeClusteringDistanceBlock;
- (bool)usesKMeans;

@end
