
@interface CKSQLiteTOCTableGroupTable : CKSQLiteTable {
    CKSQLiteDatabase * _strongDatabase;
}

+ (id)dbProperties;
+ (id)dbTableName;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)db;
- (id)deleteObject:(id)arg1;
- (id)entryWithGroupName:(id)arg1 error:(id*)arg2;
- (id)insertObject:(id)arg1;
- (id)invalidateGroup:(id)arg1;
- (void)setTableGroup:(id)arg1;
- (id)tableGroupsWithClass:(id)arg1;
- (id)updateGroupData:(id)arg1;
- (void)updateLastUsedDate:(id)arg1;

@end
