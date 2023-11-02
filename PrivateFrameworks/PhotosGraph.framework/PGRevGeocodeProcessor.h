
@interface PGRevGeocodeProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _applicationDataQueue;
    NSArray * _homeLocations;
    NSObject<OS_os_log> * _loggingConnection;
    double  _numberOfAssetClusters100mPlusFromCenter;
    unsigned long long  _numberOfAssetClustersRevGeocoded;
    double  _numberOfAssetClustersWithin100mOfCenter;
    double  _numberOfAssetClustersWithin10mOfCenter;
    double  _numberOfAssetClustersWithin20mOfCenter;
    double  _numberOfAssetClustersWithin50mOfCenter;
    unsigned long long  _numberOfMomentsRevGeocoded;
    PHPhotoLibrary * _photoLibrary;
    double  _sumNumberOfAssetClustersPerMoment;
    double  _sumNumberOfAssetsPerCluster;
    double  _sumSquareNumberOfAssetClustersPerMoment;
    double  _sumSquareNumberOfAssetsPerCluster;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *applicationDataQueue;
@property (nonatomic, retain) NSArray *homeLocations;
@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) double numberOfAssetClusters100mPlusFromCenter;
@property (nonatomic, readonly) unsigned long long numberOfAssetClustersRevGeocoded;
@property (nonatomic, readonly) double numberOfAssetClustersWithin100mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin10mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin20mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin50mOfCenter;
@property (nonatomic, readonly) unsigned long long numberOfMomentsRevGeocoded;
@property (nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) double sumNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumNumberOfAssetsPerCluster;
@property (nonatomic, readonly) double sumSquareNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumSquareNumberOfAssetsPerCluster;

+ (id)homeLocationsWithManager:(id)arg1;
+ (id)momentsRequiringRevGeocodingWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 defaultToAllAssets:(bool)arg3 loggingConnection:(id)arg4;
+ (id)reverseGeoFetchOptionsForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_clusterAssets:(id)arg1 assetsWithInvalidLocationInMoment:(id*)arg2;
- (id)_clusterAssetsInMoment:(id)arg1 assetsWithInvalidLocationInMoment:(id*)arg2;
- (bool)_populateCacheWithRegions:(id)arg1 withProgressBlock:(id /* block */)arg2;
- (void)_processMetricsOfAssetClustersInMoment:(id)arg1;
- (bool)_regionIsHome:(id)arg1;
- (void)_resetMetrics;
- (id)_revGeoLocationDataForRegion:(id)arg1;
- (bool)_revGeocodeAssetClusters:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)_setRevGeoLocationData:(id)arg1 onAssets:(id)arg2;
- (void)_updateGeoInfoForAssetClusters:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)applicationDataQueue;
- (id)homeLocations;
- (id)initWithPhotoLibrary:(id)arg1 homeLocations:(id)arg2 loggingConnection:(id)arg3;
- (id)loggingConnection;
- (double)numberOfAssetClusters100mPlusFromCenter;
- (unsigned long long)numberOfAssetClustersRevGeocoded;
- (double)numberOfAssetClustersWithin100mOfCenter;
- (double)numberOfAssetClustersWithin10mOfCenter;
- (double)numberOfAssetClustersWithin20mOfCenter;
- (double)numberOfAssetClustersWithin50mOfCenter;
- (unsigned long long)numberOfMomentsRevGeocoded;
- (id)photoLibrary;
- (bool)revGeocodeAssets:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)revGeocodeMoments:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setApplicationDataQueue:(id)arg1;
- (void)setHomeLocations:(id)arg1;
- (void)setLoggingConnection:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (double)sumNumberOfAssetClustersPerMoment;
- (double)sumNumberOfAssetsPerCluster;
- (double)sumSquareNumberOfAssetClustersPerMoment;
- (double)sumSquareNumberOfAssetsPerCluster;

@end
