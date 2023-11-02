
@interface BCSItemCache : NSObject <BCSBatchable, BCSItemCaching, BCSLinkItemCacheClearing> {
    BCSBusinessCallerPersistentStore * _businessCallerStore;
    BCSBusinessItemMemoryCache * _chatSuggestItemStore;
    BCSLinkItemPersistentStore * _linkItemStore;
    <BCSUserDefaultsProviding> * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginBatch;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (void)deleteLinkItemsWithBundleID:(id)arg1;
- (void)endBatch;
- (id)init;
- (id)itemMatching:(id)arg1;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;

@end
