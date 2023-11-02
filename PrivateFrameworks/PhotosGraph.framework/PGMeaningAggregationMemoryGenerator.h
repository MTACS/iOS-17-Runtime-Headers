
@interface PGMeaningAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    PGMemoryMomentRequirements * _momentRequirements;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

@property (nonatomic, retain) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (nonatomic, retain) PGMemoryMomentRequirements *momentRequirements;
@property (nonatomic, retain) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;

+ (unsigned long long)_extendedMeaningForActivityEvent:(id)arg1;
+ (unsigned long long)_extendedMeaningForActivityMeaningLabel:(id)arg1;
+ (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 meaningfulEvent:(id)arg2;
+ (unsigned long long)_extendedMeaningForRestaurantEvent:(id)arg1;
+ (unsigned long long)_extendedMeaningForRestaurantMeaningLabel:(id)arg1;
+ (id)allMeaningAggregationMemoryGeneratorClasses;
+ (id)featureRelationWithMeaningLabel:(id)arg1;
+ (id)mostSpecificLabelForMeaning:(unsigned long long)arg1;
+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (void).cxx_destruct;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;
- (void)setFeaturedYearConfiguration:(id)arg1;
- (void)setMomentRequirements:(id)arg1;
- (void)setOverTheYearsConfiguration:(id)arg1;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(bool)arg1;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
