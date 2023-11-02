
@interface CKSQLiteTOCTable : CKSQLiteTable

+ (id)dbProperties;
+ (id)dbTableName;
+ (Class)entryClass;

- (id)_tocEntriesWithGroupID:(id)arg1 error:(id*)arg2 label:(id)arg3 properties:(id)arg4;
- (bool)tableExists:(id)arg1 error:(id*)arg2;
- (id)tocEntriesWithGroupID:(id)arg1 error:(id*)arg2;
- (id)tocEntryWithGroupID:(id)arg1 logicalTableName:(id)arg2 error:(id*)arg3;
- (id)validationTocEntriesWithGroupID:(id)arg1 error:(id*)arg2;

@end
