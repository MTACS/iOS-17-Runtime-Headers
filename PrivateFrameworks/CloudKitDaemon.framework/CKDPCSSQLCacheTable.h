
@interface CKDPCSSQLCacheTable : CKSQLiteCacheTable

+ (double)cacheValidTime;
+ (id)dbProperties;
+ (Class)entryClass;

- (id)PCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 accountID:(id)arg4 serviceName:(id)arg5;
- (id)deletePCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 accountID:(id)arg4 serviceName:(id)arg5;
- (id)deletePCSDataForShare:(id)arg1 account:(id)arg2 serviceName:(id)arg3;
- (id)deletePCSDataForZone:(id)arg1 account:(id)arg2 serviceName:(id)arg3;
- (id)init;

@end
