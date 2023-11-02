
@interface PGMemoryPlanner : NSObject {
    PGMemoryElectorConfiguration * _configuration;
    NSDate * _currentUniversalMemoryDate;
    NSArray * _futureMemoriesGroupedByTrigger;
    NSObject<OS_os_log> * _loggingConnection;
    NSMutableDictionary * _maximumTimeDecayScoreByPastMemoryIdentifier;
    NSArray * _memoriesToAvoid;
    NSArray * _pastMemories;
    MARelation * _secondaryFeatureOfFeature;
    NSSet * _similarCategorySets;
    NSSet * _similarFeatureSets;
    NSMutableDictionary * _timeDecayScoreByPastMemoryCreationDate;
}

@property (nonatomic, readonly) PGMemoryElectorConfiguration *configuration;

+ (bool)_isFallbackMemory:(id)arg1;
+ (double)_momentCommonalityScoreComparingMomentNodes:(id)arg1 toMomentNodes:(id)arg2;
+ (bool)canElectEndOfYearTriggeredMemory:(id)arg1 withAlreadyElectedMemories:(id)arg2;
+ (bool)canElectTriggeredMemory:(id)arg1 withAlreadyElectedMemories:(id)arg2;
+ (id)groupFutureMemoriesPerTrigger:(id)arg1;

- (void).cxx_destruct;
- (double)_commonalityScoreComparingMemory:(id)arg1 toMemory:(id)arg2 momentWeight:(double)arg3 featureWeight:(double)arg4 memoryCategoryWeight:(double)arg5;
- (void)_computeIfNeededTimeDecayScoreForPastMemories;
- (id)_overallDateIntervalForTriggeredMemories:(id)arg1;
- (double)avoidScoreForMemory:(id)arg1;
- (double)categorySimilarityScoreBetweenMemory:(id)arg1 andMemory:(id)arg2;
- (double)collisionScoreForMemory:(id)arg1;
- (double)commonalityScoreComparingMemory:(id)arg1 toAlreadyElectedMemory:(id)arg2;
- (double)commonalityScoreComparingMemory:(id)arg1 toMemory:(id)arg2;
- (id)configuration;
- (id)creationDateOfLastMemory;
- (double)featureCommonalityScoreComparingFeatureNodes:(id)arg1 toFeatureNodes:(id)arg2;
- (id)filterMemories:(id)arg1 forTriggerCollisionsWithTriggerHandler:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4;
- (id)initWithPastSource:(id)arg1 futureSource:(id)arg2 configuration:(id)arg3 graph:(id)arg4 loggingConnection:(id)arg5 progressReporter:(id)arg6;
- (id)maximumTimeDecayScoreByPastMemoryIdentifier;
- (unsigned long long)numberOfDaysSinceMemoryUpgrade;
- (id)similarCategorySets;
- (id)similarFeatureSets;
- (id)timeDecayScoreByPastMemoryCreationDate;
- (double)timeDecayScoreForTriggeredMemory:(id)arg1 numberOfDaysToLook:(unsigned long long)arg2;
- (bool)tooSoonToElectMemory:(id)arg1;

@end
