
@interface PXStoryAutoEditConcreteMomentsStatistics : NSObject <PXStoryAutoEditMomentsStatistics> {
    double  _averageAssetCount;
    <PXStoryMemoryMomentClusteringDistanceCalculator> * _clusteringDistanceCalculator;
    double  _clusteringDuration;
    PFStoryClusteringProperties * _clusteringProperties;
    unsigned long long  _maximumAssetCount;
    NSString * _memoryCategoryName;
    unsigned long long  _minimumAssetCount;
}

@property (nonatomic) double averageAssetCount;
@property (nonatomic, retain) <PXStoryMemoryMomentClusteringDistanceCalculator> *clusteringDistanceCalculator;
@property (nonatomic) double clusteringDuration;
@property (nonatomic, retain) PFStoryClusteringProperties *clusteringProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (nonatomic, copy) NSString *memoryCategoryName;
@property (nonatomic) unsigned long long minimumAssetCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)averageAssetCount;
- (id)clusteringDistanceCalculator;
- (double)clusteringDuration;
- (id)clusteringProperties;
- (unsigned long long)maximumAssetCount;
- (id)memoryCategoryName;
- (unsigned long long)minimumAssetCount;
- (void)setAverageAssetCount:(double)arg1;
- (void)setClusteringDistanceCalculator:(id)arg1;
- (void)setClusteringDuration:(double)arg1;
- (void)setClusteringProperties:(id)arg1;
- (void)setMaximumAssetCount:(unsigned long long)arg1;
- (void)setMemoryCategoryName:(id)arg1;
- (void)setMinimumAssetCount:(unsigned long long)arg1;

@end
