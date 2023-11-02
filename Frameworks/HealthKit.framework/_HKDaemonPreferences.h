
@interface _HKDaemonPreferences : NSObject

+ (bool)_boolValueForKey:(id)arg1;
+ (id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2;
+ (bool)_setPreferenceValue:(void*)arg1 forKey:(id)arg2;
+ (bool)isGenerateDemoDataSet;
+ (bool)isStoreDemoModeSet;
+ (bool)setValue:(id)arg1 forKey:(id)arg2;
+ (bool)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)arg1;
+ (bool)usingDemoDataDatabase;
+ (id)valueForKey:(id)arg1;

@end
