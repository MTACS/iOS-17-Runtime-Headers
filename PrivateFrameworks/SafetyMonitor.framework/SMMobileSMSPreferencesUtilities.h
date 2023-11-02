
@interface SMMobileSMSPreferencesUtilities : NSObject

+ (id)_copyMobileSMSPreferencesValueForKey:(id)arg1;
+ (id)_criticalAlertPreference;
+ (void)_setCriticalAlertPreference:(id)arg1;
+ (void)_setHasUserCompletedOnboarding:(id)arg1;
+ (void)_setMobileSMSPreferencesValue:(id)arg1 forKey:(id)arg2;
+ (void)_setShareAllLocations:(id)arg1;
+ (void)clearCriticalAlertUserPreference;
+ (void)clearHasUserCompletedOnboarding;
+ (void)clearShareAllLocations;
+ (long long)criticalAlertPreference;
+ (bool)hasUserCompletedOnboarding;
+ (bool)isUserOnBoardedForCriticalAlert;
+ (void)setCriticalAlertPreference:(long long)arg1;
+ (void)setHasUserCompletedOnboarding:(bool)arg1;
+ (void)setShareAllLocations:(bool)arg1;
+ (bool)shareAllLocations;

@end
