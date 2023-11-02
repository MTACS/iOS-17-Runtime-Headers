
@interface CLSBusinessCategoryCache : CLSDBCache {
    NSPredicate * _predicateEntryWithUpdateTimestamp;
}

@property (nonatomic, readonly) NSPredicate *predicateEntryWithUpdateTimestamp;

- (void).cxx_destruct;
- (id)_businessItemInRegion:(id)arg1 matchingCategories:(id)arg2 maximumDistance:(double)arg3 forBusinessItems:(id)arg4;
- (id)_fetchBusinessItemsForMUIDs:(id)arg1;
- (id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg1;
- (void)_updateManagedBusinessItem:(id)arg1 withBusinessItem:(id)arg2;
- (id)businessItemFromManagedObject:(id)arg1;
- (id)businessItemsForMuid:(unsigned long long)arg1;
- (id)businessItemsForMuids:(id)arg1;
- (id)businessItemsForRegion:(id)arg1;
- (id)businessItemsInRegion:(id)arg1 categories:(id)arg2 maximumDistance:(double)arg3;
- (id)dataModelName;
- (bool)hasRegion:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)nearestItemForRegion:(id)arg1 inItems:(id)arg2;
- (unsigned long long)numberOfBusinessItemsForRegion:(id)arg1;
- (id)predicateEntryWithUpdateTimestamp;
- (id)predicateForEntryNearbyRegion:(id)arg1;
- (id)predicateForRegion:(id)arg1;
- (id)updateBusinessItems:(id)arg1;

@end
