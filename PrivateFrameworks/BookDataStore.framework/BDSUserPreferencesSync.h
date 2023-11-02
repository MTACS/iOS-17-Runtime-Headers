
@interface BDSUserPreferencesSync : NSObject

+ (void)copyChangedGroupPreferencesToLocalContainer;
+ (void)copyChangedLocalPreferencesToGroupContainer;
+ (void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)arg1 container:(id)arg2 groupName:(id)arg3 groupContainer:(id)arg4;
+ (id)objectFromGroupPreferencesForKey:(id)arg1;
+ (id)syncedPreferenceKeys;

@end
