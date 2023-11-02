
@interface CKDIdentityCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;
- (id)predicateForMatchingLookupInfoInContainer;
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;

@end
