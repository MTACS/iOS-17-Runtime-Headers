
@protocol SpotlightReceiver <NSObject>

@optional

- (void)addInteractions:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)addOrUpdateSearchableItems:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addUserAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2;
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1;
- (void)deleteAllUserActivities:(NSString *)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)deleteInteractionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)donateRelevantActions:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)donateRelevantShortcuts:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)purgeSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (NSArray *)supportedBundleIDs;
- (NSArray *)supportedContentTypes;
- (NSArray *)supportedINIntentClassNames;

@end
