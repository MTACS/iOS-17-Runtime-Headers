
@interface ACHVisibilityEvaluator : NSObject {
    NSCalendar * _calendar;
    NSNumber * _injectedIsStandalonePhoneFitnessMode;
    NSDate * _injectedNow;
    NSString * _injectedWatchCountryCode;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSNumber *injectedIsStandalonePhoneFitnessMode;
@property (nonatomic, retain) NSDate *injectedNow;
@property (nonatomic, retain) NSString *injectedWatchCountryCode;

- (void).cxx_destruct;
- (void)_injectIsStandalonePhoneFitnessMode:(bool)arg1;
- (void)_injectNow:(id)arg1;
- (void)_injectWatchCountryCode:(id)arg1;
- (id)calendar;
- (id)init;
- (id)injectedIsStandalonePhoneFitnessMode;
- (id)injectedNow;
- (id)injectedWatchCountryCode;
- (void)setCalendar:(id)arg1;
- (void)setInjectedIsStandalonePhoneFitnessMode:(id)arg1;
- (void)setInjectedNow:(id)arg1;
- (void)setInjectedWatchCountryCode:(id)arg1;
- (bool)unearnedAchievementIsVisibleNow:(id)arg1;
- (bool)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2;
- (bool)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2 experienceType:(unsigned long long)arg3;
- (bool)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2 experienceType:(unsigned long long)arg3 isFitnessPlusSubscriber:(bool)arg4;
- (bool)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2 experienceType:(unsigned long long)arg3 isFitnessPlusSubscriber:(bool)arg4 isWheelchairUser:(bool)arg5;

@end
