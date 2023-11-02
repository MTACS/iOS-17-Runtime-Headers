
@interface PGLocationCLIPTrendsMemoryGenerator : PGLocationTrendsMemoryGenerator {
    unsigned long long  _minimumSceneAnalysisVersion;
}

- (id)initWithMemoryGenerationContext:(id)arg1 configurations:(id)arg2;
- (unsigned long long)minimumSceneAnalysisVersion;
- (void)setMinimumSceneAnalysisVersion:(unsigned long long)arg1;

@end
