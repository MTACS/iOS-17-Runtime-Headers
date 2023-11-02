
@interface PGBirthdayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    bool  _requireFaceProcessingMeetsThresholdOverTime;
}

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (id)initWithMemoryGenerationContext:(id)arg1;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;

@end
