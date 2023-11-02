
@interface PLHierarchicalClustering : PLDataClustering {
    unsigned long long  _k;
    unsigned long long  _linkage;
    bool  _reportsProgressInDistancesMatrixCalculation;
    double  _threshold;
    bool  _usesSortedDataRelativeDistanceCache;
}

@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long linkage;
@property (nonatomic) bool reportsProgressInDistancesMatrixCalculation;
@property (nonatomic) double threshold;
@property (nonatomic) bool usesSortedDataRelativeDistanceCache;

- (unsigned long long)_clustroidIndexForClusters:(unsigned long long*)arg1 numberOfObjects:(unsigned long long)arg2 distances:(double**)arg3 relativeDistanceCache:(double*)arg4;
- (double*)_createRelativeDistanceCacheForDataset:(id)arg1;
- (id)init;
- (unsigned long long)k;
- (unsigned long long)linkage;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)reportsProgressInDistancesMatrixCalculation;
- (void)setK:(unsigned long long)arg1;
- (void)setLinkage:(unsigned long long)arg1;
- (void)setReportsProgressInDistancesMatrixCalculation:(bool)arg1;
- (void)setThreshold:(double)arg1;
- (void)setUsesSortedDataRelativeDistanceCache:(bool)arg1;
- (double)threshold;
- (bool)usesSortedDataRelativeDistanceCache;

@end
