
@interface PLOPTICSClustering : PLDataDensityClustering {
    NSProgress * _progress;
}

- (void).cxx_destruct;
- (id)extractRootClusters:(id)arg1 inOriginalDataset:(id)arg2 inProgressBlock:(id /* block */)arg3;
- (id)extractSubClusters:(id)arg1 inDataset:(id)arg2 parentIndex:(long long)arg3 inProgressBlock:(id /* block */)arg4;
- (id)orderedDatasetByReachabilityDistance:(id)arg1;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)prepareOrderedDatasetIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inDataset:(id)arg2;
- (id)preprocessData:(id)arg1;
- (void)updateNeighbors:(id)arg1 forIndex:(unsigned long long)arg2;
- (long long)updateReachibilityDistance:(id)arg1 forIndex:(unsigned long long)arg2;

@end
