
@interface CBPreferencesHandler : NSObject

+ (void)consistencyCheckForUser:(id)arg1;
+ (id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2;
+ (id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3;
+ (struct __CFDictionary { }*)copyPreferenceDictionaryForUser:(id)arg1;
+ (id)copyPreferenceForAllUsersForKey:(id)arg1;
+ (id)copyPreferenceForAllUsersMultiple:(id)arg1;
+ (id)copyPreferenceForUser:(id)arg1 forKey:(id)arg2;
+ (bool)migrateNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 toKey:(id)arg3;
+ (bool)storeNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 andValue:(id)arg4;
+ (bool)storePreferenceForAllUsersForKey:(id)arg1 andValue:(id)arg2;
+ (bool)storePreferenceForAllUsersMultiple:(id)arg1;
+ (bool)storePreferenceForUser:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;

@end
