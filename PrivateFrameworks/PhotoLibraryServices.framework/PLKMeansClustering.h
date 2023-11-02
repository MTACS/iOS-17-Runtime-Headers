
@interface PLKMeansClustering : PLDataClustering {
    unsigned long long  _k;
}

@property (nonatomic) unsigned long long k;

- (double*)_dataArray:(id)arg1 featureCount:(unsigned int)arg2 useKeypaths:(bool)arg3;
- (id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(id /* block */)arg3;
- (unsigned long long)k;
- (id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setK:(unsigned long long)arg1;

@end
