
@protocol PXStoryAutoEditMomentsStatistics <NSObject>

@required

- (double)averageAssetCount;
- (<PXStoryMemoryMomentClusteringDistanceCalculator> *)clusteringDistanceCalculator;
- (double)clusteringDuration;
- (PFStoryClusteringProperties *)clusteringProperties;
- (unsigned long long)maximumAssetCount;
- (NSString *)memoryCategoryName;
- (unsigned long long)minimumAssetCount;

@end
