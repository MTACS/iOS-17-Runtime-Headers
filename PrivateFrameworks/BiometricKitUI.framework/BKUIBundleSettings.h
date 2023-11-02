
@interface BKUIBundleSettings : NSObject

+ (bool)boolForUserDefaultsKey:(id)arg1;
+ (float)floatForUserDefaultsKey:(id)arg1;
+ (long long)integerForUserDefaultsKey:(id)arg1;
+ (bool)isFpEnrollHapticFeedbackDisabled;
+ (bool)isUserStudy;
+ (id)objectForKey:(id)arg1;
+ (void)setBool:(bool)arg1 forUserDefaultsKey:(id)arg2;
+ (void)setDefaultSettingsValues;
+ (void)setInteger:(long long)arg1 forUserDefaultsKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)synchronize;

@end
