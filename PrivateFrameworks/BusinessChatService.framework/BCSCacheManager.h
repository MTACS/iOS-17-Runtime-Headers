
@interface BCSCacheManager : NSObject <BCSBatchable, BCSCacheClearing, BCSConfigCacheSkipping, BCSConfigCaching, BCSDomainItemCaching, BCSItemCacheSkipping, BCSItemCaching, BCSShardCacheQueryable, BCSShardCacheSkipping> {
    <BCSDomainItemCaching> * _domainItemCache;
    <BCSShardCacheQueryable> * _filterShardCache;
    <BCSItemCaching><BCSLinkItemCacheClearing> * _itemCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginBatch;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (id)configItemForType:(long long)arg1;
- (long long)countOfExpiredShardsOfType:(long long)arg1;
- (long long)countOfShardsOfType:(long long)arg1;
- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteConfigItemForType:(long long)arg1;
- (void)deleteDomainItemMatching:(id)arg1;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteExpiredShardItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (void)deleteShardItemMatching:(id)arg1;
- (void)deleteShardItemsOfType:(long long)arg1;
- (id)domainItemMatching:(id)arg1;
- (void)endBatch;
- (id)initWithBloomFilterShardCache:(id)arg1 domainItemCache:(id)arg2 itemCache:(id)arg3;
- (id)itemMatching:(id)arg1;
- (id)shardItemMatching:(id)arg1;
- (bool)shouldSkipCacheForConfigItemOfType:(long long)arg1;
- (bool)shouldSkipCacheForItemOfType:(long long)arg1;
- (bool)shouldSkipCacheForShardItemOfType:(long long)arg1;
- (void)updateConfigItem:(id)arg1 withType:(long long)arg2;
- (void)updateDomainItem:(id)arg1 withDomainItemIdentifier:(id)arg2;
- (void)updateDomainItemsForDomainShard:(id)arg1;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;
- (void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2;

@end
