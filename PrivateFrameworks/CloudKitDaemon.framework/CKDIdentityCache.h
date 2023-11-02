
@interface CKDIdentityCache : CKSQLiteTableGroup

+ (id)cacheWithDeviceContext:(id)arg1;
+ (unsigned long long)ttlDays;

- (id)cache;
- (void)cacheUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;
- (id)createTables:(id*)arg1;
- (void)removeCachedValueForLookupInfo:(id)arg1 container:(id)arg2;

@end
