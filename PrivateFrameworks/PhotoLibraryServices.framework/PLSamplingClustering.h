
@interface PLSamplingClustering : PLDataDensityClustering {
    unsigned long long  _numberOfClusters;
}

@property (nonatomic) unsigned long long numberOfClusters;

- (unsigned long long)numberOfClusters;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setNumberOfClusters:(unsigned long long)arg1;

@end
