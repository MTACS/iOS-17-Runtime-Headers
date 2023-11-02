
@interface PGPlaceAreaMemoryGenerator : PGOverTimeMemoryGenerator {
    MABinaryAdjacency * _addressNodesByAreaNode;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

- (void).cxx_destruct;
- (id)_addressNodesByAreaNodeInGraph:(id)arg1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)arg1 featureNodes:(id)arg2;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
