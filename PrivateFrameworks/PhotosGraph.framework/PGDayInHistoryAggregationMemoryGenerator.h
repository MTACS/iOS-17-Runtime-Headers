
@interface PGDayInHistoryAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

- (void).cxx_destruct;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
