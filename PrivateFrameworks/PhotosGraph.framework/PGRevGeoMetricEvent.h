
@interface PGRevGeoMetricEvent : PGAbstractMetricEvent {
    double  _numberOfAssetClustersPerMomentMean;
    double  _numberOfAssetClustersPerMomentStdDev;
    double  _numberOfAssetsPerClusterMean;
    double  _numberOfAssetsPerClusterStdDev;
    double  _ratioAssetClusters100mPlusFromCenter;
    double  _ratioAssetClustersWithin100mOfCenter;
    double  _ratioAssetClustersWithin10mOfCenter;
    double  _ratioAssetClustersWithin20mOfCenter;
    double  _ratioAssetClustersWithin50mOfCenter;
}

@property (nonatomic, readonly) double numberOfAssetClustersPerMomentMean;
@property (nonatomic, readonly) double numberOfAssetClustersPerMomentStdDev;
@property (nonatomic, readonly) double numberOfAssetsPerClusterMean;
@property (nonatomic, readonly) double numberOfAssetsPerClusterStdDev;
@property (nonatomic, readonly) double ratioAssetClusters100mPlusFromCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin100mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin10mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin20mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin50mOfCenter;

- (id)identifier;
- (id)initWithNumberOfAssetClustersPerMomentMean:(double)arg1 numberOfAssetClustersPerMomentStdDev:(double)arg2 numberOfAssetsPerClusterMean:(double)arg3 numberOfAssetsPerClusterStdDev:(double)arg4 ratioAssetClustersWithin10mOfCenter:(double)arg5 ratioAssetClustersWithin20mOfCenter:(double)arg6 ratioAssetClustersWithin50mOfCenter:(double)arg7 ratioAssetClustersWithin100mOfCenter:(double)arg8 ratioAssetClusters100mPlusFromCenter:(double)arg9;
- (double)numberOfAssetClustersPerMomentMean;
- (double)numberOfAssetClustersPerMomentStdDev;
- (double)numberOfAssetsPerClusterMean;
- (double)numberOfAssetsPerClusterStdDev;
- (id)payload;
- (double)ratioAssetClusters100mPlusFromCenter;
- (double)ratioAssetClustersWithin100mOfCenter;
- (double)ratioAssetClustersWithin10mOfCenter;
- (double)ratioAssetClustersWithin20mOfCenter;
- (double)ratioAssetClustersWithin50mOfCenter;

@end
