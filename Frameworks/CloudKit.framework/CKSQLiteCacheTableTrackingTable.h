
@interface CKSQLiteCacheTableTrackingTable : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)updateEntryOldestExpireDate:(id)arg1 oldestExpirationDate:(id)arg2;

@end
