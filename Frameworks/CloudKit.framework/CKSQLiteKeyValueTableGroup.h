
@interface CKSQLiteKeyValueTableGroup : CKSQLiteSharedTableGroup {
    CKSQLiteKeyValueStore * _store;
}

+ (id)keyValueStoreInDatabase:(id)arg1;

- (void).cxx_destruct;
- (id)createTables:(id*)arg1;

@end
