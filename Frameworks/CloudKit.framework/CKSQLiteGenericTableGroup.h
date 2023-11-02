
@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup

+ (id)groupEntryInDatabase:(id)arg1 withGroupName:(id)arg2 error:(id*)arg3;
+ (id)tableGroupInDatabase:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)createTables:(id*)arg1;
- (long long)validateTableMatchesTOCEntry:(id)arg1;

@end
