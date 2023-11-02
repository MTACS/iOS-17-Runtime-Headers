
@interface AMSStorage : NSObject

+ (id)_allKeysWithDomain:(id)arg1;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(id)arg3;
+ (bool)_boolFromCFPreferencesForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (bool)_boolFromDatabaseForKey:(id)arg1 defaultValue:(bool)arg2 domain:(id)arg3 error:(id*)arg4;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(id)arg3;
+ (long long)_integerFromCFPreferencesForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerFromDatabaseForKey:(id)arg1 defaultValue:(long long)arg2 domain:(id)arg3 error:(id*)arg4;
+ (void)_migrateBoolToDatabase:(bool)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_migrateIntegerToDatabase:(long long)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_migrateValueToDatabase:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_setBoolWithCFPreferences:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (bool)_setBoolWithDatabase:(bool)arg1 forKey:(id)arg2 domain:(id)arg3 error:(id*)arg4;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_setIntegerWithCFPreferences:(long long)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (bool)_setIntegerWithDatabase:(long long)arg1 forKey:(id)arg2 domain:(id)arg3 error:(id*)arg4;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (void)_setValueWithCFPreferences:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
+ (bool)_setValueWithDatabase:(id)arg1 forKey:(id)arg2 domain:(id)arg3 error:(id*)arg4;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(id)arg2;
+ (id)_valueFromCFPreferencesForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (id)_valueFromDatabaseForKey:(id)arg1 domain:(id)arg2 error:(id*)arg3;
+ (id)bagURLCookies;
+ (id)deviceOfferEligibility;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setSharedStoreReviewMetrics:(id)arg1 forProcess:(id)arg2;
+ (id)sharedStoreReviewMetricsForProcess:(id)arg1;

@end
