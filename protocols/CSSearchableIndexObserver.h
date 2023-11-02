
@protocol CSSearchableIndexObserver <NSObject>

@required

- (void)addOrUpdateSearchableItems:(NSArray *)arg1;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;

@optional

- (void)addUserAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 bundleID:(NSString *)arg2;
- (void)purgeSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (NSArray *)supportedUTIs;

@end
