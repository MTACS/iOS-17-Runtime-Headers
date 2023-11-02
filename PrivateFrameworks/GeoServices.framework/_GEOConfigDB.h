
@interface _GEOConfigDB : _GEOConfigCache {
    int (* _addFunction;
    int (* _clearFunction;
    GEOSQLiteDB * _db;
    _Atomic long long  _lastId;
    _GEOConfigDBOperationQueue * _operationQueue;
    int (* _setFunction;
}

@property (nonatomic, readonly) int (*addFunction;
@property (nonatomic, readonly) int (*clearFunction;
@property (nonatomic, readonly) GEOSQLiteDB *db;
@property (nonatomic, readonly) _GEOConfigDBOperationQueue *operationQueue;
@property (nonatomic, readonly) int (*setFunction;

- (void).cxx_destruct;
- (int (*)addFunction;
- (int (*)clearFunction;
- (id)db;
- (id)init:(id)arg1 cache:(id)arg2 operationQueue:(id)arg3 clearFunction:(int (*)arg4 setFunction:(int (*)arg5 addFunction:(int (*)arg6 tableName:(id)arg7;
- (long long)nextId;
- (id)operationQueue;
- (int (*)setFunction;

@end
