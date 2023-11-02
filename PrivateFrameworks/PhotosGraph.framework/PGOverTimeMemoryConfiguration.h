
@interface PGOverTimeMemoryConfiguration : NSObject {
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

@property (nonatomic) double aboveMomentAverageContentScoreThreshold;
@property (nonatomic) bool allMomentsMustHaveFacesProcessed;
@property (nonatomic) bool allMomentsMustHaveScenesProcessed;
@property (nonatomic) double minimumMomentSpreadicityTimeInterval;
@property (nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic) unsigned long long minimumNumberOfMoments;
@property (nonatomic) unsigned long long minimumNumberOfMomentsInterestingForMemories;
@property (nonatomic) unsigned long long minimumNumberOfMomentsInterestingWithAlternateJunking;
@property (nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (nonatomic) double minimumOverallTimeIntervalOfMoments;

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
- (void)setAboveMomentAverageContentScoreThreshold:(double)arg1;
- (void)setAllMomentsMustHaveFacesProcessed:(bool)arg1;
- (void)setAllMomentsMustHaveScenesProcessed:(bool)arg1;
- (void)setMinimumMomentSpreadicityTimeInterval:(double)arg1;
- (void)setMinimumNumberOfAssetsInExtendedCuration:(unsigned long long)arg1;
- (void)setMinimumNumberOfMoments:(unsigned long long)arg1;
- (void)setMinimumNumberOfMomentsInterestingForMemories:(unsigned long long)arg1;
- (void)setMinimumNumberOfMomentsInterestingWithAlternateJunking:(unsigned long long)arg1;
- (void)setMinimumNumberOfRelevantAssets:(unsigned long long)arg1;
- (void)setMinimumOverallTimeIntervalOfMoments:(double)arg1;

@end
