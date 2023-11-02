
@interface PGMemoryMomentRequirements : NSObject {
    double  _aboveContentScoreThreshold;
    bool  _filterMomentsWithNotEnoughScenesProcessed;
    bool  _filterUninterestingForMemories;
    bool  _filterUninterestingWithAlternateJunking;
    unsigned long long  _minimumNumberOfAssetsInExtendedCuration;
    unsigned long long  _minimumNumberOfPersons;
    unsigned long long  _minimumNumberOfRelevantAssets;
}

@property (nonatomic) double aboveContentScoreThreshold;
@property (nonatomic) bool filterMomentsWithNotEnoughScenesProcessed;
@property (nonatomic) bool filterUninterestingForMemories;
@property (nonatomic) bool filterUninterestingWithAlternateJunking;
@property (nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic) unsigned long long minimumNumberOfPersons;
@property (nonatomic) unsigned long long minimumNumberOfRelevantAssets;

- (double)aboveContentScoreThreshold;
- (bool)filterMomentsWithNotEnoughScenesProcessed;
- (bool)filterUninterestingForMemories;
- (bool)filterUninterestingWithAlternateJunking;
- (unsigned long long)minimumNumberOfAssetsInExtendedCuration;
- (unsigned long long)minimumNumberOfPersons;
- (unsigned long long)minimumNumberOfRelevantAssets;
- (void)setAboveContentScoreThreshold:(double)arg1;
- (void)setFilterMomentsWithNotEnoughScenesProcessed:(bool)arg1;
- (void)setFilterUninterestingForMemories:(bool)arg1;
- (void)setFilterUninterestingWithAlternateJunking:(bool)arg1;
- (void)setMinimumNumberOfAssetsInExtendedCuration:(unsigned long long)arg1;
- (void)setMinimumNumberOfPersons:(unsigned long long)arg1;
- (void)setMinimumNumberOfRelevantAssets:(unsigned long long)arg1;

@end
