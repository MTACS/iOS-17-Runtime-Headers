
@interface CKSQLiteReferencedObjectTable : CKSQLiteTable {
    CKSQLiteRefcountTable * _refcountTable;
}

- (void).cxx_destruct;
- (id)databaseReferenceValueForEntry:(id)arg1 error:(id*)arg2;
- (id)didCreateDatabaseTable;
- (id)entryForDatabaseReferenceValue:(id)arg1 error:(id*)arg2;
- (id)extraGroupTables:(id)arg1;
- (id)lookupRefcountTable;
- (unsigned long long)refcountForEntry:(id)arg1;
- (id)refcountTableName;
- (id)refcountTriggerSQLForProperty:(id)arg1 inTable:(id)arg2;
- (id)wakeFromDatabase;
- (id)willStoreReferenceToUnsavedEntry:(id)arg1;

@end
