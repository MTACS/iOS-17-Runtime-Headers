
@interface AMSSQLiteQuery : NSObject {
    AMSSQLiteConnection * _connection;
    AMSSQLiteQueryDescriptor * _descriptor;
}

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) long long countOfEntities;
@property (readonly) AMSSQLiteQueryDescriptor *queryDescriptor;

- (void).cxx_destruct;
- (id)_newSelectSQLWithProperties:(id)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int*)arg2;
- (id)connection;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(id)arg1;
- (long long)countOfEntities;
- (bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
- (bool)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;
- (id)queryDescriptor;

@end
