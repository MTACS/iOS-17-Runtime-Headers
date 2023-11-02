
@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSArray * _homeLocations;
    double  _numberOfAssetClusters100mPlusFromCenter;
    unsigned long long  _numberOfAssetClustersRevGeocoded;
    double  _numberOfAssetClustersWithin100mOfCenter;
    double  _numberOfAssetClustersWithin10mOfCenter;
    double  _numberOfAssetClustersWithin20mOfCenter;
    double  _numberOfAssetClustersWithin50mOfCenter;
    unsigned long long  _numberOfMomentsRevGeocoded;
    double  _sumNumberOfAssetClustersPerMoment;
    double  _sumNumberOfAssetsPerCluster;
    double  _sumSquareNumberOfAssetClustersPerMoment;
    double  _sumSquareNumberOfAssetsPerCluster;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeLocations;
@property (nonatomic, readonly) double numberOfAssetClusters100mPlusFromCenter;
@property (nonatomic, readonly) unsigned long long numberOfAssetClustersRevGeocoded;
@property (nonatomic, readonly) double numberOfAssetClustersWithin100mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin10mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin20mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin50mOfCenter;
@property (nonatomic, readonly) unsigned long long numberOfMomentsRevGeocoded;
@property (nonatomic, readonly) double sumNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumNumberOfAssetsPerCluster;
@property (nonatomic, readonly) double sumSquareNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumSquareNumberOfAssetsPerCluster;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowReverseGeocodingWithUpdateType:(long long)arg1;
- (bool)_populateCacheWithRegions:(id)arg1 manager:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (void)_processMetricsOfAssetClustersInMoment:(id)arg1;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)homeLocations;
- (id)init;
- (void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)numberOfAssetClusters100mPlusFromCenter;
- (unsigned long long)numberOfAssetClustersRevGeocoded;
- (double)numberOfAssetClustersWithin100mOfCenter;
- (double)numberOfAssetClustersWithin10mOfCenter;
- (double)numberOfAssetClustersWithin20mOfCenter;
- (double)numberOfAssetClustersWithin50mOfCenter;
- (unsigned long long)numberOfMomentsRevGeocoded;
- (bool)revGeoProviderDidChangeForGraphApplicationDataURL:(id)arg1;
- (void)sendMetricsForGeocodeProcesssor:(id)arg1 toAnalytics:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)setCurrentGeoProviderInGraphApplicationDataURL:(id)arg1;
- (void)setHomeLocations:(id)arg1;
- (double)sumNumberOfAssetClustersPerMoment;
- (double)sumNumberOfAssetsPerCluster;
- (double)sumSquareNumberOfAssetClustersPerMoment;
- (double)sumSquareNumberOfAssetsPerCluster;

@end
