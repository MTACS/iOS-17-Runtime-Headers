
@interface PGPersonFoodieMemoryGenerator : PGFoodieMemoryGenerator {
    bool  _requireFaceProcessingMeetsThresholdOverTime;
}

- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;

@end
