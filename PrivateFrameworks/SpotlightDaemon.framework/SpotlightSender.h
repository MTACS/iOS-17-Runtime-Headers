
@interface SpotlightSender : NSObject

+ (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5;
+ (void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5;
+ (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;
+ (void)clearCache;
+ (id)clientConnection:(long long)arg1;
+ (id)clientConnection:(long long)arg1 jobType:(int)arg2;
+ (id)connectionForClient:(long long)arg1 jobType:(long long)arg2;
+ (id)copyDiagnosticInfo;
+ (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(long long)arg3;
+ (void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(long long)arg2;
+ (void)deleteAllUserActivities:(id)arg1 client:(long long)arg2;
+ (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;
+ (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;
+ (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(long long)arg4;
+ (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 retainedData:(id)arg4;
+ (void)dispatchWithOptions:(long long)arg1 block:(id /* block */)arg2;
+ (void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;
+ (bool)enabledForClient:(long long)arg1;
+ (bool)jobForAssets:(long long)arg1;
+ (bool)jobForDuet:(long long)arg1;
+ (bool)jobForImages:(long long)arg1;
+ (bool)jobForSuggestions:(long long)arg1;
+ (bool)jobForTest:(long long)arg1;
+ (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;
+ (void)setup;

@end
