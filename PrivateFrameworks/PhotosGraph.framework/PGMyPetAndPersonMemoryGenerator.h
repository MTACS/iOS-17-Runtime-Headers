
@interface PGMyPetAndPersonMemoryGenerator : PGMyPetMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    bool  _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements * _momentRequirements;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredSeasonConfiguration;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (bool)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;

@end
