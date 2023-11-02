
@interface PGYearInReviewMemoryGenerator : PGOverTimeMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    PGMemoryMomentRequirements * _momentRequirements;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
    long long  _year;
}

@property (nonatomic) long long year;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setYear:(long long)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;
- (id)titleGeneratorWithYear:(long long)arg1 titleGenerationContext:(id)arg2;
- (long long)year;

@end
