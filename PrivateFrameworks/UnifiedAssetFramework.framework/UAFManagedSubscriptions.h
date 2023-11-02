
@interface UAFManagedSubscriptions : NSObject

+ (id)createHoldSubscription:(id)arg1;
+ (id)getExistingSubscription:(id)arg1 subscriber:(id)arg2;
+ (void)manageAssistantSubscription:(id)arg1 withMode:(long long)arg2;
+ (void)manageMorphunSystemLocaleSubscription:(id)arg1;
+ (void)manageNLSystemLanguageSubscription:(id)arg1;
+ (void)manageSubscription:(id)arg1 subscriber:(id)arg2 assetSets:(id)arg3 usageAliases:(id)arg4;
+ (id)morphunUsagesForLocale:(id)arg1;
+ (id)validateUsageAlias:(id)arg1 usageAliasValue:(id)arg2;

@end
