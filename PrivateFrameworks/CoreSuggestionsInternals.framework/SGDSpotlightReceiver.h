
@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {
    SGCoalescingDropBox * _deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox * _deleteInteractionGroupIdDropbox;
    SGCoalescingDropBox * _deleteInteractionIdDropbox;
    <SpotlightReceiver> * _duReceiver;
    SGDSuggestManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSearchableItem:(id)arg1 bundleID:(id)arg2;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteAllUserActivities:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (id)initWithManager:(id)arg1;
- (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)supportedContentTypes;

@end
