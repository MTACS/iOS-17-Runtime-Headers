
@interface PGSeasonMemoryGenerator : PGOverTimeMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
    PGMemoryMomentRequirements * _momentRequirements;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

+ (void)enumerateMomentNodesBySeasonInYearFromMomentNodes:(id)arg1 loggingConnection:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredSeasonConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
