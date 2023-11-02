
@interface PGLocationTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    PGMemoryMomentRequirements * _momentRequirements;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithMemoryGenerationContext:(id)arg1 configurations:(id)arg2;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (id)trendType;

@end
