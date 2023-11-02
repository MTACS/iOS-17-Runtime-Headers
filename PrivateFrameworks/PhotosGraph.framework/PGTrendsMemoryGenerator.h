
@interface PGTrendsMemoryGenerator : PGOverTimeMemoryGenerator {
    PGGraphSceneFeatureNodeCollection * _allTrendsSceneFeatureNodesInGraph;
    NSArray * _configurations;
    PGFeaturedTimePeriodMemoryConfiguration * _fallbackFeaturedYearConfiguration;
    PGOverTheYearsMemoryConfiguration * _fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    unsigned long long  _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
    PGGraphMomentNodeCollection * _restaurantMomentNodes;
    PGGraphMomentNodeCollection * _winterSportMomentNodes;
}

@property (nonatomic, readonly) NSArray *configurations;

+ (id)allTrendSceneFeatureLabels;
+ (id)trendsConfigurations;

- (void).cxx_destruct;
- (id)_trendSceneFeatureLabelsToRequireKnownPeopleInCuration;
- (id)allTrendSceneFeatureNodesInGraph:(id)arg1;
- (id)configurations;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)filteredMomentNodes:(id)arg1 withSceneLabel:(id)arg2 inGraph:(id)arg3;
- (id)initWithMemoryGenerationContext:(id)arg1 configurations:(id)arg2;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (unsigned long long)minimumNumberOfDefaultMemories;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setMinimumNumberOfDefaultMemories:(unsigned long long)arg1;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;
- (id)trendType;
- (id)validSceneFeatureNodesInGraph:(id)arg1;

@end
