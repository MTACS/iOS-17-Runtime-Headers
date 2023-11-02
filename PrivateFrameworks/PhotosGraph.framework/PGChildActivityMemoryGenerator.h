
@interface PGChildActivityMemoryGenerator : PGOverTimeMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _fallbackFeaturedYearConfiguration;
    PGOverTheYearsMemoryConfiguration * _fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    unsigned long long  _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

- (void).cxx_destruct;
- (id)_supportedCompoundActivityLabels;
- (id)_supportedIndividualActivityLabels;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
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

@end
