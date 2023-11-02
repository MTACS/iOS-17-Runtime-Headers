
@interface HDDemoDataGeneratorConfiguration : NSObject {
    long long  _biologicalSex;
    long long  _generationPeriodInDays;
    bool  _highFidelityGeneration;
    long long  _nutritionTrackingType;
    long long  _profileType;
    long long  _resultsTrackingType;
    long long  _sampleTrackingType;
    bool  _shouldEnsureRecentWorkoutHasRoute;
    bool  _shouldGenerateHealthDocuments;
    bool  _shouldGenerateLoudHeadphoneData;
    bool  _shouldGenerateMedicalID;
    bool  _shouldGenerateRecentLiquidsIntake;
    bool  _shouldPresentNotifications;
}

@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long generationPeriodInDays;
@property (nonatomic) bool highFidelityGeneration;
@property (nonatomic) long long nutritionTrackingType;
@property (nonatomic) long long profileType;
@property (nonatomic) long long resultsTrackingType;
@property (nonatomic) long long sampleTrackingType;
@property (nonatomic) bool shouldEnsureRecentWorkoutHasRoute;
@property (nonatomic) bool shouldGenerateHealthDocuments;
@property (nonatomic) bool shouldGenerateLoudHeadphoneData;
@property (nonatomic) bool shouldGenerateMedicalID;
@property (nonatomic) bool shouldGenerateRecentLiquidsIntake;
@property (nonatomic) bool shouldPresentNotifications;

+ (id)configurationFromDefaults:(id)arg1;

- (long long)biologicalSex;
- (void)configureForProfileType:(long long)arg1;
- (long long)generationPeriodInDays;
- (bool)highFidelityGeneration;
- (id)init;
- (long long)nutritionTrackingType;
- (void)persistToDefaults:(id)arg1;
- (long long)profileType;
- (long long)resultsTrackingType;
- (long long)sampleTrackingType;
- (void)setBiologicalSex:(long long)arg1;
- (void)setGenerationPeriodInDays:(long long)arg1;
- (void)setHighFidelityGeneration:(bool)arg1;
- (void)setNutritionTrackingType:(long long)arg1;
- (void)setProfileType:(long long)arg1;
- (void)setResultsTrackingType:(long long)arg1;
- (void)setSampleTrackingType:(long long)arg1;
- (void)setShouldEnsureRecentWorkoutHasRoute:(bool)arg1;
- (void)setShouldGenerateHealthDocuments:(bool)arg1;
- (void)setShouldGenerateLoudHeadphoneData:(bool)arg1;
- (void)setShouldGenerateMedicalID:(bool)arg1;
- (void)setShouldGenerateRecentLiquidsIntake:(bool)arg1;
- (void)setShouldPresentNotifications:(bool)arg1;
- (bool)shouldEnsureRecentWorkoutHasRoute;
- (bool)shouldGenerateHealthDocuments;
- (bool)shouldGenerateLoudHeadphoneData;
- (bool)shouldGenerateMedicalID;
- (bool)shouldGenerateRecentLiquidsIntake;
- (bool)shouldPresentNotifications;

@end
