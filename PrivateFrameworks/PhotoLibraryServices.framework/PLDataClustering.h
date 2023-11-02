
@interface PLDataClustering : NSObject {
    id /* block */  _clusterConsolidationBlock;
    id /* block */  _clusterKeyElementBlock;
    id /* block */  _distanceBlock;
    NSArray * _numericValueKeypaths;
}

@property (nonatomic, copy) id /* block */ clusterConsolidationBlock;
@property (nonatomic, copy) id /* block */ clusterKeyElementBlock;
@property (nonatomic, readonly, copy) id /* block */ distanceBlock;
@property (nonatomic, readonly) NSArray *numericValueKeypaths;

+ (id)clustering;
+ (id)clusteringWithDistanceBlock:(id /* block */)arg1;
+ (id)clusteringWithNumericValueKeypaths:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)clusterConsolidationBlock;
- (id /* block */)clusterKeyElementBlock;
- (double*)createDistancesFlatMatrixForDataset:(id)arg1;
- (double**)createDistancesMatrixForDataset:(id)arg1;
- (double**)createDistancesMatrixForDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (id /* block */)distanceBlock;
- (void)freeDistancesFlatMatrix:(double*)arg1;
- (void)freeDistancesMatrix:(double**)arg1 forDataset:(id)arg2;
- (id)initWithDistanceBlock:(id /* block */)arg1;
- (id)initWithNumericValueKeypaths:(id)arg1;
- (id)numericValueKeypaths;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setClusterConsolidationBlock:(id /* block */)arg1;
- (void)setClusterKeyElementBlock:(id /* block */)arg1;

@end
