
@interface PGHolidayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    PGMemoryMomentRequirements * _momentRequirements;
}

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (void).cxx_destruct;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (id)momentRequirements;
- (void)setMomentRequirements:(id)arg1;

@end
