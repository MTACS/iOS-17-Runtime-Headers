
@interface SiriCoreSyncDatabase : NSObject {
    SiriCoreSQLiteDatabase * _db;
    bool  _debugMode;
    bool  _inTransaction;
    NSString * _path;
}

@property (nonatomic) bool debugMode;
@property (nonatomic) bool inTransaction;

+ (id)currentSyncDatabase;
+ (void)removeCurrentSyncDatabase;

- (void).cxx_destruct;
- (int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id*)arg4;
- (bool)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)_executeStatement:(id)arg1 error:(id*)arg2;
- (bool)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id*)arg3;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3;
- (int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3;
- (int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3;
- (bool)debugMode;
- (bool)donate:(id)arg1 error:(id*)arg2;
- (bool)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)inTransaction;
- (id)initWithPath:(id)arg1;
- (bool)markAsSent:(id)arg1 error:(id*)arg2;
- (bool)openWithError:(id*)arg1;
- (bool)prepare;
- (bool)remove:(id)arg1 error:(id*)arg2;
- (bool)removeAllItemsOfKey:(id)arg1 error:(id*)arg2;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (void)setDebugMode:(bool)arg1;
- (void)setInTransaction:(bool)arg1;
- (bool)succeedOrRollbackOnFail:(id)arg1 error:(id*)arg2 whileExecuting:(id /* block */)arg3;

@end
