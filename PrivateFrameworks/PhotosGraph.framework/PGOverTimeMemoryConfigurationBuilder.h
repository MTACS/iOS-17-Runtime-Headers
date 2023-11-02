
@interface PGOverTimeMemoryConfigurationBuilder : PGConfiguration {
    double  _aboveMomentAverageContentScoreThreshold;
    bool  _allMomentsMustHaveFacesProcessed;
    bool  _allMomentsMustHaveScenesProcessed;
    double  _minimumMomentSpreadicityTimeInterval;
    unsigned long long  _minimumNumberOfAssetsInExtendedCuration;
    unsigned long long  _minimumNumberOfMoments;
    unsigned long long  _minimumNumberOfMomentsInterestingForMemories;
    unsigned long long  _minimumNumberOfMomentsInterestingWithAlternateJunking;
    unsigned long long  _minimumNumberOfRelevantAssets;
    double  _minimumOverallTimeIntervalOfMoments;
}

@property (nonatomic, readonly) double aboveMomentAverageContentScoreThreshold;
@property (nonatomic, readonly) bool allMomentsMustHaveFacesProcessed;
@property (nonatomic, readonly) bool allMomentsMustHaveScenesProcessed;
@property (nonatomic, readonly) double minimumMomentSpreadicityTimeInterval;
@property (nonatomic, readonly) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMoments;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMomentsInterestingForMemories;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMomentsInterestingWithAlternateJunking;
@property (nonatomic, readonly) unsigned long long minimumNumberOfRelevantAssets;
@property (nonatomic, readonly) double minimumOverallTimeIntervalOfMoments;

- (double)aboveMomentAverageContentScoreThreshold;
- (bool)allMomentsMustHaveFacesProcessed;
- (bool)allMomentsMustHaveScenesProcessed;
- (double)minimumMomentSpreadicityTimeInterval;
- (unsigned long long)minimumNumberOfAssetsInExtendedCuration;
- (unsigned long long)minimumNumberOfMoments;
- (unsigned long long)minimumNumberOfMomentsInterestingForMemories;
- (unsigned long long)minimumNumberOfMomentsInterestingWithAlternateJunking;
- (unsigned long long)minimumNumberOfRelevantAssets;
- (double)minimumOverallTimeIntervalOfMoments;

@end
