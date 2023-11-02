
@interface CKDPCSSQLCacheTableGroup : CKSQLiteTableGroup

+ (id)cacheTableGroupInDatabase:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3;
+ (id)groupIdentifierForContainerID:(id)arg1 accountOverrideInfo:(id)arg2;
+ (bool)rebootShouldClearData;

- (id)cacheTable;
- (id)createTables:(id*)arg1;

@end
