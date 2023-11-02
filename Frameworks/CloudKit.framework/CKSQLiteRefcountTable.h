
@interface CKSQLiteRefcountTable : CKSQLiteTable {
    CKSQLiteReferencedObjectTable * _referentDBTable;
    NSString * _referentPrimaryKey;
}

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)createTableSQL;
- (id)deleteUnreferenced;
- (id)finishInitializing;
- (id)initWithLogicalTableName:(id)arg1 referentTable:(id)arg2;
- (unsigned long long)refcountForObjectID:(id)arg1;

@end
