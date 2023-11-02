
@interface ATXDefaultHomeScreenItemOnboardingStacksProducer : NSObject {
    unsigned long long  _adblDrainClassification;
    NSDictionary * _appLaunchCounts;
    NSNumber * _cachedHasiCloudFamily;
    NSMutableDictionary * _cachedWidgetPersonalityToAppScore;
    bool  _isAmbient;
    bool  _isDayZeroExperience;
    bool  _isiPad;
    NSDictionary * _personalityToDescriptorDictionary;
    bool  _shouldIncludeContactsWidget;
    NSArray * _stackableCandidates;
}

@property (nonatomic, readonly) unsigned long long adblDrainClassification;
@property (nonatomic, readonly) NSNumber *cachedHasiCloudFamily;
@property (nonatomic, retain) NSMutableDictionary *cachedWidgetPersonalityToAppScore;
@property (nonatomic, readonly) bool isAmbient;
@property (nonatomic, readonly) bool isDayZeroExperience;
@property (nonatomic, readonly) bool isiPad;
@property (nonatomic, retain) NSDictionary *personalityToDescriptorDictionary;
@property (nonatomic, readonly) bool shouldIncludeContactsWidget;
@property (nonatomic, readonly) NSArray *stackableCandidates;

- (void).cxx_destruct;
- (void)_addWidget:(id)arg1 toStack:(id)arg2 andMarkAsUsed:(id)arg3;
- (id)_ambientOnboardingStacks;
- (id)_blockedWidgetPersonalities;
- (id)_dayZeroOnboardingStacks;
- (id)_firstUnusedWidgetFromList:(id)arg1 fallbackWidgets:(id)arg2 usedPersonalities:(id)arg3 size:(unsigned long long)arg4;
- (id)_firstWidgetThatIsntUsedYet:(id)arg1 usedPersonalities:(id)arg2;
- (id)_personalizedAmbientOnboardingStacksForSize:(unsigned long long)arg1 stack1RequiredWidgetPersonalities:(id)arg2 stack2RequiredWidgetPersonalities:(id)arg3 rankedWidgets:(id)arg4 usedWidgetPersonalities:(id)arg5;
- (id)_personalizedOnboardingStackForSize:(unsigned long long)arg1 requiredWidgetPersonalities:(id)arg2 conditionalWidgetPersonalities:(id)arg3 fallbackWidgetPersonalities:(id)arg4 rankedThirdPartyWidgets:(id)arg5 usedWidgetPersonalities:(id)arg6 shouldAdd3PWidgetToStack:(bool)arg7;
- (id)_personalizedOnboardingStacksForSize:(unsigned long long)arg1 requiredWidgetPersonalitiesForStack1:(id)arg2 requiredWidgetPersonalitiesForStack2:(id)arg3 conditionalWidgetPersonalitiesForStack1:(id)arg4 conditionalWidgetPersonalitiesForStack2:(id)arg5 fallbackWidgetPersonalitiesForStack1:(id)arg6 fallbackWidgetPersonalitiesForStack2:(id)arg7 rankedThirdPartyWidgets:(id)arg8 blockedWidgetPersonalities:(id)arg9;
- (unsigned long long)adblDrainClassification;
- (id)cachedHasiCloudFamily;
- (id)cachedWidgetPersonalityToAppScore;
- (id)initWithCandidateWidgets:(id)arg1 cachedWidgetPersonalityToAppScore:(id)arg2 personalityToDescriptorDictionary:(id)arg3 adblDrainClassification:(unsigned long long)arg4 isiPad:(bool)arg5 isDayZeroExperience:(bool)arg6 shouldIncludeContactsWidget:(bool)arg7 cachedHasiCloudFamily:(id)arg8 appLaunchCounts:(id)arg9 isAmbient:(bool)arg10;
- (id)initWithOnboardingStackWidgetCache:(id)arg1 adblDrainClassification:(unsigned long long)arg2 isiPad:(bool)arg3 shouldIncludeContactsWidget:(bool)arg4 appLaunchCounts:(id)arg5;
- (bool)isAmbient;
- (bool)isDayZeroExperience;
- (bool)isiPad;
- (id)onboardingStacks;
- (id)personalityToDescriptorDictionary;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)arg1;
- (void)setCachedWidgetPersonalityToAppScore:(id)arg1;
- (void)setPersonalityToDescriptorDictionary:(id)arg1;
- (bool)shouldIncludeContactsWidget;
- (id)stackableCandidates;

@end
