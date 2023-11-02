
@interface PGMyPetOutdoorMemoryGenerator : PGMyPetMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredSeasonConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
