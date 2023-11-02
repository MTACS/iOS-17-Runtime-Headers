
@interface _EDThreadPersistence_SQLHelper : NSObject {
    _EDThreadPersistence_StatementCache * _cache;
    EDPersistenceDatabaseConnection * _connection;
}

@property (nonatomic, readonly) _EDThreadPersistence_StatementCache *cache;
@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;

- (void).cxx_destruct;
- (id)cache;
- (id)connection;
- (bool)executeSQL:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(id /* block */)arg3;
- (bool)executeSelectSQL:(id)arg1 bindings:(id /* block */)arg2 errorHandler:(id /* block */)arg3 rowHandler:(id /* block */)arg4;
- (int)executeUpdateSQL:(id)arg1 bindings:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (long long)executeUpsertSQL:(id)arg1 bindings:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)initWithCache:(id)arg1;

@end
