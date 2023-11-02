
@interface ATXDefaultHomeScreenItemProducer : NSObject {
    unsigned long long  _adblDrainClassification;
    NSDictionary * _appLaunchCounts;
    NSMutableDictionary * _cachedWidgetPersonalityToAppScore;
    NSArray * _candidateDescriptors;
    NSDictionary * _descriptorInstallDates;
    NSSet * _descriptors;
    NSArray * _homeScreenConfig;
    bool  _isDayZeroExperience;
    bool  _isiPad;
    NSDictionary * _personalityToDescriptorDictionary;
    <ATXCategoricalHistogramProtocol> * _spotlightAppLaunchHistogram;
    NSSet * _widgetsOnHomeScreen;
}

@property (nonatomic) unsigned long long adblDrainClassification;
@property (nonatomic, retain) NSArray *candidateDescriptors;
@property (nonatomic, readonly) NSDictionary *descriptorInstallDates;
@property (nonatomic, readonly) NSSet *descriptors;
@property (nonatomic, readonly) NSArray *homeScreenConfig;
@property (nonatomic) bool isDayZeroExperience;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) NSDictionary *personalityToDescriptorDictionary;
@property (nonatomic, readonly) ATXDefaultHomeScreenItemUpdate *update;
@property (nonatomic, retain) NSSet *widgetsOnHomeScreen;

+ (id)appPredictionsWidgetDescriptor;

- (void).cxx_destruct;
- (id)_appPredictionsWidgetDescriptor;
- (id)_dayZeroOnboardingStacks;
- (id)_dayZeroUpdate;
- (id)_firstInstalledWidgetDate;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (bool)_isNewlyInstalledWidget:(id)arg1;
- (bool)_isStackConfiguredOnHomeScreen;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)arg1;
- (id)_personalizedStack;
- (id)_personalizedStackForRankerPlistType:(int)arg1;
- (id)_personalizedStackFromCandidates:(id)arg1 rankerPlistType:(int)arg2 size:(unsigned long long)arg3;
- (id)_personalizedTodayStack;
- (id)_personalizedUpdate;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(bool)arg1 isAlreadyAdded:(bool)arg2;
- (id)_stackFromDefaultStackPersonalities:(id)arg1;
- (id)_stackableCandidates;
- (unsigned long long)adblDrainClassification;
- (id)ambientOnboardingStacks;
- (id)candidateDescriptors;
- (id)descriptorInstallDates;
- (id)descriptors;
- (id)homeScreenConfig;
- (id)initWithDescriptors:(id)arg1 descriptorInstallDates:(id)arg2 homeScreenConfig:(id)arg3 isDayZeroExperience:(bool)arg4 isiPad:(bool)arg5 spotlightAppLaunchHistogram:(id)arg6 adblDrainClassification:(unsigned long long)arg7 appLaunchCounts:(id)arg8;
- (id)initWithDescriptors:(id)arg1 descriptorInstallDates:(id)arg2 homeScreenConfig:(id)arg3 isDayZeroExperience:(bool)arg4 isiPad:(bool)arg5 spotlightAppLaunchHistogram:(id)arg6 appLaunchCounts:(id)arg7;
- (bool)isDayZeroExperience;
- (bool)isiPad;
- (id)onboardingStacks;
- (id)personalityToDescriptorDictionary;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)arg1;
- (void)setAdblDrainClassification:(unsigned long long)arg1;
- (void)setCandidateDescriptors:(id)arg1;
- (void)setIsDayZeroExperience:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setPersonalityToDescriptorDictionary:(id)arg1;
- (void)setWidgetsOnHomeScreen:(id)arg1;
- (id)update;
- (id)widgetsOnHomeScreen;

@end
