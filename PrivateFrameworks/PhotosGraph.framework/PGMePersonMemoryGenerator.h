
@interface PGMePersonMemoryGenerator : PGPersonMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredSeasonConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;

@end
