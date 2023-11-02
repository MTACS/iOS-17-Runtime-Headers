
@interface DUFileUpdateSpotlightReceiver : NSObject <SpotlightReceiver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)supportedBundleIDs;
- (id)supportedContentTypes;

@end
