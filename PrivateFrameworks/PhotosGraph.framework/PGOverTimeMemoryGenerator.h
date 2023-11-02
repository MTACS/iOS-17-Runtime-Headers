
@interface PGOverTimeMemoryGenerator : PGMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _fallbackFeaturedYearConfiguration;
    PGOverTheYearsMemoryConfiguration * _fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    PGGraphMomentNodeCollection * _interestingForMemoriesMomentNodes;
    bool  _intersectRelevantAssetsForFeatures;
    unsigned long long  _minimumNumberOfDefaultMemories;
    unsigned long long  _minimumSceneAnalysisVersion;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
    NSMutableDictionary * _yearByYearNodeIdentifier;
}

@property (nonatomic, readonly) PGFeaturedTimePeriodMemoryConfiguration *fallbackFeaturedYearConfiguration;
@property (nonatomic, readonly) PGOverTheYearsMemoryConfiguration *fallbackOverTheYearsConfiguration;
@property (nonatomic, readonly) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;
@property (nonatomic, readonly) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (nonatomic, readonly) bool intersectRelevantAssetsForFeatures;
@property (nonatomic, readonly) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long minimumNumberOfDefaultMemories;
@property (nonatomic) unsigned long long minimumSceneAnalysisVersion;
@property (nonatomic, readonly) PGMemoryMomentRequirements *momentRequirements;
@property (nonatomic, readonly) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (nonatomic) bool requireFaceProcessingMeetsThresholdOverTime;
@property (nonatomic) bool requireSceneProcessingMeetsThresholdOverTime;

- (void).cxx_destruct;
- (id)_filteredMomentNodesFromMomentNodes:(id)arg1 featureNodes:(id)arg2;
- (bool)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2;
- (bool)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)arg1 configuration:(id)arg2;
- (bool)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2 inYear:(long long)arg3 configuration:(id)arg4;
- (bool)_shouldCreateMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2 withConfiguration:(id)arg3;
- (bool)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2 configuration:(id)arg3;
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)arg1;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredSeasonConfiguration;
- (id)featuredYearConfiguration;
- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (unsigned long long)minimumNumberOfDefaultMemories;
- (unsigned long long)minimumSceneAnalysisVersion;
- (id)momentRequirements;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)arg1 featureNodes:(id)arg2;
- (id)overTheYearsConfiguration;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setMinimumNumberOfDefaultMemories:(unsigned long long)arg1;
- (void)setMinimumSceneAnalysisVersion:(unsigned long long)arg1;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;

@end
