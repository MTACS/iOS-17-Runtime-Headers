
@interface CKVDatabaseConnection : NSObject <CKVDatabaseReadOnlyAccess, CKVDatabaseReadWriteAccess> {
    NSObject<CKVDatabase> * _db;
    bool  _inTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)connectionToDatabaseAtURL:(id)arg1 dataProtectionClass:(int)arg2 openMode:(long long)arg3;
+ (id)readOnlyConnectionToDatabaseAtURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_createTableWithRecordClass:(Class)arg1 error:(id*)arg2;
- (bool)_getRowResultsOfSelect:(id)arg1 outRows:(id*)arg2 error:(id*)arg3;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)cleanup:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (void)dealloc;
- (bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 enumerateAll:(bool)arg5 error:(id*)arg6 usingBlock:(id /* block */)arg7;
- (bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateRowResultsOfSelect:(id)arg1 batchSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 enumerateAll:(bool)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
- (bool)enumerateRowResultsOfSelect:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)executeCommand:(id)arg1 error:(id*)arg2;
- (bool)executeCommand:(id)arg1 error:(id*)arg2 returningRow:(id*)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)openWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (int)rowsModified:(id*)arg1;

@end
