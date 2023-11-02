
@interface PLLOFOutlierDetection : NSObject {
    bool  _filterZeroDistanceDataset;
    unsigned long long  _k;
}

@property (nonatomic) bool filterZeroDistanceDataset;
@property (nonatomic) unsigned long long k;

- (double**)createDistancesMatrixForDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (id)createKNNMatrixWithDistanceMatrix:(double**)arg1 size:(unsigned long long)arg2;
- (bool)filterZeroDistanceDataset;
- (id)filteredObjectsWithDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (void)freeDistancesMatrix:(double**)arg1 forDataset:(id)arg2;
- (id)init;
- (unsigned long long)k;
- (id)lofScoresWithDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (void)setFilterZeroDistanceDataset:(bool)arg1;
- (void)setK:(unsigned long long)arg1;

@end
