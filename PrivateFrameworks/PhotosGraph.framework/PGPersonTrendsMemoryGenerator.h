
@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    bool  _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements * _momentRequirements;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
}

- (void).cxx_destruct;
- (id)childOnlyPersonTrends;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithMemoryGenerationContext:(id)arg1 configurations:(id)arg2;
- (bool)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)trendType;

@end
