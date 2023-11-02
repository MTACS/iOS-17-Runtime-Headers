
@interface CLSSummaryClustering : NSObject {
    unsigned long long  _adaptiveElectionMaximumNumberOfItemsByCluster;
    unsigned long long  _adaptiveElectionMinimumNumberOfItemsByCluster;
    unsigned long long  _adaptiveElectionSmootherMaximumLimit;
    unsigned long long  _adaptiveElectionSmootherMinimumLimit;
    double  _conciseDensityClusteringMaximumDistance;
    unsigned long long  _conciseDensityClusteringMinimumNumberOfObjects;
    unsigned long long  _densityClusteringLocationsDistanceUnit;
    double  _diffuseDensityClusteringMaximumDistance;
    unsigned long long  _diffuseDensityClusteringMinimumNumberOfObjects;
    bool  _enableAdaptiveElectionSmoother;
    bool  _enableAdaptiveElectionSmootherAutomaticLimit;
    bool  _enableDensityClusteringLocationsDistance;
    bool  _enableMultipassDensityClustering;
    double  _optimalDayDistributionThreshold;
    unsigned long long  _timeSpanDensityAverageNumberOfObjects;
}

@property (nonatomic) unsigned long long adaptiveElectionMaximumNumberOfItemsByCluster;
@property (nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster;
@property (nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit;
@property (nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit;
@property (nonatomic) double conciseDensityClusteringMaximumDistance;
@property (nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects;
@property (nonatomic) unsigned long long densityClusteringLocationsDistanceUnit;
@property (nonatomic) double diffuseDensityClusteringMaximumDistance;
@property (nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects;
@property (nonatomic) bool enableAdaptiveElectionSmoother;
@property (nonatomic) bool enableAdaptiveElectionSmootherAutomaticLimit;
@property (nonatomic) bool enableDensityClusteringLocationsDistance;
@property (nonatomic) bool enableMultipassDensityClustering;
@property (nonatomic) double optimalDayDistributionThreshold;
@property (nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects;

+ (id)clustering;
+ (double)maximumScoreForItems:(id)arg1;
+ (double)meanScoreForItems:(id)arg1;
+ (double)scoreForItems:(id)arg1;

- (id)_densityClustersWithItems:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)adaptiveElection:(id)arg1 identifiersOfEligibleItems:(id)arg2 maximumNumberOfItemsToElect:(unsigned long long)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (unsigned long long)adaptiveElectionMaximumNumberOfItemsByCluster;
- (unsigned long long)adaptiveElectionMinimumNumberOfItemsByCluster;
- (unsigned long long)adaptiveElectionSmootherMaximumLimit;
- (unsigned long long)adaptiveElectionSmootherMinimumLimit;
- (double)conciseDensityClusteringMaximumDistance;
- (unsigned long long)conciseDensityClusteringMinimumNumberOfObjects;
- (id /* block */)densityClusteringDistanceBlock;
- (unsigned long long)densityClusteringLocationsDistanceUnit;
- (id)densityClustersWithItems:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)diffuseDensityClusteringMaximumDistance;
- (unsigned long long)diffuseDensityClusteringMinimumNumberOfObjects;
- (bool)enableAdaptiveElectionSmoother;
- (bool)enableAdaptiveElectionSmootherAutomaticLimit;
- (bool)enableDensityClusteringLocationsDistance;
- (bool)enableMultipassDensityClustering;
- (id)init;
- (double)optimalDayDistributionThreshold;
- (id)performWithItems:(id)arg1 identifiersOfEligibleItems:(id)arg2 maximumNumberOfItemsToElect:(unsigned long long)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)performWithItems:(id)arg1 identifiersOfEligibleItems:(id)arg2 maximumNumberOfItemsToElect:(unsigned long long)arg3 progressBlock:(id /* block */)arg4;
- (void)setAdaptiveElectionMaximumNumberOfItemsByCluster:(unsigned long long)arg1;
- (void)setAdaptiveElectionMinimumNumberOfItemsByCluster:(unsigned long long)arg1;
- (void)setAdaptiveElectionSmootherMaximumLimit:(unsigned long long)arg1;
- (void)setAdaptiveElectionSmootherMinimumLimit:(unsigned long long)arg1;
- (void)setConciseDensityClusteringMaximumDistance:(double)arg1;
- (void)setConciseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1;
- (void)setDensityClusteringLocationsDistanceUnit:(unsigned long long)arg1;
- (void)setDiffuseDensityClusteringMaximumDistance:(double)arg1;
- (void)setDiffuseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1;
- (void)setEnableAdaptiveElectionSmoother:(bool)arg1;
- (void)setEnableAdaptiveElectionSmootherAutomaticLimit:(bool)arg1;
- (void)setEnableDensityClusteringLocationsDistance:(bool)arg1;
- (void)setEnableMultipassDensityClustering:(bool)arg1;
- (void)setOptimalDayDistributionThreshold:(double)arg1;
- (void)setTimeSpanDensityAverageNumberOfObjects:(unsigned long long)arg1;
- (unsigned long long)timeSpanDensityAverageNumberOfObjects;

@end
