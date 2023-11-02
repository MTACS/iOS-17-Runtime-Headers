
@interface CKSQLiteDatabaseRegistry : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)databaseIDForDatabase:(id)arg1 error:(id*)arg2;
- (id)databaseWithID:(id)arg1;
- (id)entryForDatabase:(id)arg1 refresh:(bool)arg2 error:(id*)arg3;
- (id)registerDatabase:(id)arg1;

@end
