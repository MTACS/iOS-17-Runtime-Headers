
@interface HKRPOxygenSaturationOnboardingCache : NSObject {
    NSUserDefaults * _userDefaults;
    <HKRPUserDefaultsSyncProviding> * _userDefaultsSyncProvider;
}

@property (nonatomic, copy) NSNumber *hasCompletedOnboarding;

- (void).cxx_destruct;
- (id)hasCompletedOnboarding;
- (id)initWithUserDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2;
- (void)setHasCompletedOnboarding:(id)arg1;

@end
