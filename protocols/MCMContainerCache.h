
@protocol MCMContainerCache <NSObject>

@required

- (<MCMContainerCacheEntry> *)addContainerMetadata:(id <MCMMetadataMinimal>)arg1 error:(id*)arg2;
- (<MCMContainerClassCache> *)classCacheForContainerIdentity:(MCMContainerIdentity *)arg1;
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(MCMContainerIdentity *)arg1 error:(id*)arg2;
- (NSArray *)entriesForUserIdentities:(NSSet *)arg1 contentClass:(unsigned long long)arg2 transient:(bool)arg3 error:(id*)arg4;
- (<MCMContainerCacheEntry> *)entryForContainerIdentity:(MCMContainerIdentity *)arg1 classCache:(id <MCMContainerClassCache>)arg2 error:(id*)arg3;
- (<MCMContainerCacheEntry> *)entryForContainerIdentity:(MCMContainerIdentity *)arg1 error:(id*)arg2;
- (void)flushCacheForUserIdentity:(MCMUserIdentity *)arg1 containerClass:(unsigned long long)arg2 transient:(bool)arg3;
- (id)initWithUserIdentityCache:(MCMUserIdentityCache *)arg1 childParentMapCache:(id <MCMChildParentMapCache>)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 error:(id*)arg5;
- (bool)removeContainerForUserIdentity:(MCMUserIdentity *)arg1 contentClass:(unsigned long long)arg2 identifier:(NSString *)arg3 transient:(bool)arg4 error:(id*)arg5;
- (void)setContainerClassCache:(id <MCMContainerClassCache>)arg1;
- (MCMUserIdentityCache *)userIdentityCache;

@end
