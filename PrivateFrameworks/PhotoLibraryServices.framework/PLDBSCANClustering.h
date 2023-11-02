
@interface PLDBSCANClustering : PLDataDensityClustering

- (id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(struct __CFSet { }*)arg3 visitedObjects:(unsigned long long*)arg4 distancesFlatMatrix:(double*)arg5 neighbors:(id)arg6;
- (id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesFlatMatrix:(double*)arg2 datasetSize:(unsigned long long)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;

@end
