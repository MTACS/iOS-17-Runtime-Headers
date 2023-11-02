
@interface PLCompactMomentClustering : NSObject {
    NSSet * _frequentLocations;
    NSSet * _locationsOfInterest;
}

- (id)_assetClustersFromDataClusters:(id)arg1;
- (id)_clusterAssetsWithUnusableLocation:(id)arg1;
- (id)_clusterAssetsWithUsableLocation:(id)arg1;
- (id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2;
- (id)_processedLocationTypeByAssetUUIDFromAssets:(id)arg1;
- (id)_runDBSCANClusteringWithAssets:(id)arg1;
- (id)_shareStateByAssetUUIDFromAssets:(id)arg1 momentHasMixedOwnership:(bool*)arg2;
- (unsigned short)_validLocationTypeForBucketingAssets:(unsigned short)arg1;
- (id)assetsByLocationTypeFromAssets:(id)arg1;
- (id)createAssetClustersForAssetsInDay:(id)arg1;
- (void)dealloc;
- (id)initWithDataManager:(id)arg1 frequentLocations:(id)arg2;
- (id)newAssetClusterFromAssetsSortedByDate:(id)arg1;

@end
