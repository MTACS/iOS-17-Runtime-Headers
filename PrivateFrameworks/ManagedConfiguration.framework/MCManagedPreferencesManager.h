
@interface MCManagedPreferencesManager : NSObject

+ (bool)addManagedPreferences:(id)arg1 toDomain:(id)arg2;
+ (id)globalManagedPreferencesDomain;
+ (id)managedPreferencesForDomain:(id)arg1;
+ (id)managedPreferencesPathForDomain:(id)arg1;
+ (bool)removeManagedPreferences:(id)arg1 fromDomain:(id)arg2;
+ (void)sendManagedPreferencesChangedNotificationForDomains:(id)arg1;
+ (bool)setManagedPreferences:(id)arg1 forDomain:(id)arg2;
+ (void)updateGlobalManagedPreferencesByAddingPreferences:(id)arg1 removingPreferences:(id)arg2;

@end
