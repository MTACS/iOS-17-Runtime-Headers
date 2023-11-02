
@interface PGMemoryMomentRequirementsBuilder : PGConfiguration {
    double  _aboveContentScoreThreshold;
    bool  _filterMomentsWithNotEnoughScenesProcessed;
    bool  _filterUninterestingForMemories;
    bool  _filterUninterestingWithAlternateJunking;
    unsigned long long  _minimumNumberOfAssetsInExtendedCuration;
    unsigned long long  _minimumNumberOfPersons;
    unsigned long long  _minimumNumberOfRelevantAssets;
}

@property (nonatomic, readonly) double aboveContentScoreThreshold;
@property (nonatomic, readonly) bool filterMomentsWithNotEnoughScenesProcessed;
@property (nonatomic, readonly) bool filterUninterestingForMemories;
@property (nonatomic, readonly) bool filterUninterestingWithAlternateJunking;
@property (nonatomic, readonly) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic, readonly) unsigned long long minimumNumberOfPersons;
@property (nonatomic, readonly) unsigned long long minimumNumberOfRelevantAssets;

- (double)aboveContentScoreThreshold;
- (bool)filterMomentsWithNotEnoughScenesProcessed;
- (bool)filterUninterestingForMemories;
- (bool)filterUninterestingWithAlternateJunking;
- (id)memoryMomentRequirements;
- (unsigned long long)minimumNumberOfAssetsInExtendedCuration;
- (unsigned long long)minimumNumberOfPersons;
- (unsigned long long)minimumNumberOfRelevantAssets;

@end
