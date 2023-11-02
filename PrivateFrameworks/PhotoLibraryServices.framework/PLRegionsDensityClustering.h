
@interface PLRegionsDensityClustering : PLRegionsClustering {
    unsigned long long  _algorithm;
    double  _definiteClusterMaximumDistanceUnit;
    unsigned long long  _definiteClusterMinimumNumberOfObjects;
    double  _definiteClusterMinimumNumberOfObjectsPercent;
    double  _definiteClusterTimeIntervalDistance;
    double  _extensiveClusterMaximumDistanceUnit;
    unsigned long long  _extensiveClusterMinimumNumberOfObjects;
    double  _extensiveClusterMinimumNumberOfObjectsPercent;
    double  _extensiveClusterTimeIntervalDistance;
    bool  _includeDefiniteClusters;
    bool  _includeExtensiveClusters;
    bool  _removeDefiniteClustersObjectsFromDataset;
    bool  _removeExtensiveClustersContainingDefiniteClusters;
    bool  _removeExtensiveClustersObjectsFromDataset;
}

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double definiteClusterMaximumDistanceUnit;
@property (nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;
@property (nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) double definiteClusterTimeIntervalDistance;
@property (nonatomic) double extensiveClusterMaximumDistanceUnit;
@property (nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;
@property (nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) double extensiveClusterTimeIntervalDistance;
@property (nonatomic) bool includeDefiniteClusters;
@property (nonatomic) bool includeExtensiveClusters;
@property (nonatomic) bool removeDefiniteClustersObjectsFromDataset;
@property (nonatomic) bool removeExtensiveClustersContainingDefiniteClusters;
@property (nonatomic) bool removeExtensiveClustersObjectsFromDataset;

- (id /* block */)_locationBasedClusteringBlock;
- (id /* block */)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1;
- (unsigned long long)algorithm;
- (double)definiteClusterMaximumDistanceUnit;
- (unsigned long long)definiteClusterMinimumNumberOfObjects;
- (double)definiteClusterMinimumNumberOfObjectsPercent;
- (double)definiteClusterTimeIntervalDistance;
- (double)extensiveClusterMaximumDistanceUnit;
- (unsigned long long)extensiveClusterMinimumNumberOfObjects;
- (double)extensiveClusterMinimumNumberOfObjectsPercent;
- (double)extensiveClusterTimeIntervalDistance;
- (bool)includeDefiniteClusters;
- (bool)includeExtensiveClusters;
- (id)init;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)removeDefiniteClustersObjectsFromDataset;
- (bool)removeExtensiveClustersContainingDefiniteClusters;
- (bool)removeExtensiveClustersObjectsFromDataset;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setDefiniteClusterMaximumDistanceUnit:(double)arg1;
- (void)setDefiniteClusterMinimumNumberOfObjects:(unsigned long long)arg1;
- (void)setDefiniteClusterMinimumNumberOfObjectsPercent:(double)arg1;
- (void)setDefiniteClusterTimeIntervalDistance:(double)arg1;
- (void)setExtensiveClusterMaximumDistanceUnit:(double)arg1;
- (void)setExtensiveClusterMinimumNumberOfObjects:(unsigned long long)arg1;
- (void)setExtensiveClusterMinimumNumberOfObjectsPercent:(double)arg1;
- (void)setExtensiveClusterTimeIntervalDistance:(double)arg1;
- (void)setIncludeDefiniteClusters:(bool)arg1;
- (void)setIncludeExtensiveClusters:(bool)arg1;
- (void)setRemoveDefiniteClustersObjectsFromDataset:(bool)arg1;
- (void)setRemoveExtensiveClustersContainingDefiniteClusters:(bool)arg1;
- (void)setRemoveExtensiveClustersObjectsFromDataset:(bool)arg1;

@end
