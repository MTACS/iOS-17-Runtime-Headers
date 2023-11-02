
@interface ATXApp2VecClustering : NSObject {
    ATXApp2VecMapping * _appEmbeddings;
    ATXApp2VecMapping * _clusterCentroids;
    bool  _loaded;
    long long  _vectorLength;
}

+ (void)resetSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getClosestClusterCentroidForVector:(const float*)arg1;
- (float)_getL2DistanceFrom:(const float*)arg1 to:(float*)arg2;
- (id)_mergeClusterCentroids:(id)arg1 forBundleIds:(id)arg2;
- (id)getClosestClusterCentroidForBundleId:(id)arg1;
- (id)getClusterCentroidsForBundleIds:(id)arg1;
- (id)init;

@end
