
@interface PGMemoryConfiguration : PGConfiguration {
    PGFeaturedTimePeriodMemoryConfiguration * _featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration * _featuredYearConfiguration;
    bool  _intersectRelevantAssetsForFeatures;
    unsigned long long  _memoryCategory;
    NSDictionary * _memoryCategorySubcategoryByOverTimeType;
    NSArray * _memoryFeatureSpecifications;
    PGMemoryMomentRequirements * _memoryMomentRequirements;
    unsigned long long  _minimumSceneAnalysisVersion;
    PGOverTheYearsMemoryConfiguration * _overTheYearsConfiguration;
    bool  _requireFaceProcessingMeetsThresholdOverTime;
    bool  _requireSceneProcessingMeetsThresholdOverTime;
}

@property (nonatomic, readonly) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;
@property (nonatomic, readonly) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (nonatomic, readonly) bool intersectRelevantAssetsForFeatures;
@property (nonatomic, readonly) unsigned long long memoryCategory;
@property (nonatomic, readonly) NSDictionary *memoryCategorySubcategoryByOverTimeType;
@property (nonatomic, readonly) NSArray *memoryFeatureSpecifications;
@property (nonatomic, readonly) PGMemoryMomentRequirements *memoryMomentRequirements;
@property (nonatomic, readonly) unsigned long long minimumSceneAnalysisVersion;
@property (nonatomic, readonly) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (nonatomic, readonly) bool requireFaceProcessingMeetsThresholdOverTime;
@property (nonatomic, readonly) bool requireSceneProcessingMeetsThresholdOverTime;

+ (id)featuredTimePeriodMemoryConfigurationFromDictionary:(id)arg1;
+ (unsigned long long)memoryCategoryFromMemoryCategoryLabel:(id)arg1;
+ (id)memoryCategorySubcategoryByOverTimeTypeFromLabels:(id)arg1;
+ (id)memoryConfigurationsWithGraph:(id)arg1 loggingConnection:(id)arg2;
+ (id)memoryFeatureSpecificationsFromDictionaries:(id)arg1 memoryConfigurationLabel:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4;
+ (id)memoryMomentRequirementsFromDictionary:(id)arg1;
+ (unsigned long long)minimumSceneAnalysisVersionForSignalModel:(long long)arg1;
+ (id)overTheYearsMemoryConfigurationFromDictionary:(id)arg1;
+ (id)resolveConfigurationDictionary:(id)arg1 configurationLabel:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4;

- (void).cxx_destruct;
- (id)featuredSeasonConfiguration;
- (id)featuredYearConfiguration;
- (bool)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategory;
- (id)memoryCategorySubcategoryByOverTimeType;
- (id)memoryFeatureSpecifications;
- (id)memoryMomentRequirements;
- (unsigned long long)minimumSceneAnalysisVersion;
- (id)overTheYearsConfiguration;
- (bool)requireFaceProcessingMeetsThresholdOverTime;
- (bool)requireSceneProcessingMeetsThresholdOverTime;

@end
