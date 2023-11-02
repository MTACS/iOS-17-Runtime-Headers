
@interface PGCurationCache : CLSDBCache

+ (id)defaultCacheName;

- (id)_curatedAssetIdentifiersforMomentUUID:(id)arg1 options:(id)arg2;
- (id)_curatedKeyAssetIdentifierforMomentUUID:(id)arg1 options:(id)arg2;
- (id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2;
- (void)_invalidateCacheForMomentWithUUID:(id)arg1;
- (void)_invalidateCacheForMomentsWithUUIDs:(id)arg1;
- (void)_setCuratedAssets:(id)arg1 forMomentUUID:(id)arg2 options:(id)arg3;
- (void)_setCuratedKeyAsset:(id)arg1 forMomentUUID:(id)arg2 options:(id)arg3;
- (void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 momentUUID:(id)arg3 predicate:(id)arg4;
- (id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForCollectionUUID:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2;
- (id)dataModelName;
- (id)initAtURL:(id)arg1;
- (void)invalidateCacheForMomentUUID:(id)arg1;
- (void)invalidateCacheForMomentUUIDs:(id)arg1;
- (void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forCollectionUUID:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3;

@end
