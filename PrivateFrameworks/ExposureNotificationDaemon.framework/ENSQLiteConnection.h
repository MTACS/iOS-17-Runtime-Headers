
@interface ENSQLiteConnection : NSObject {
    int  _additionalOpenFlags;
    struct sqlite3 { } * _db;
    NSURL * _fileURL;
    bool  _isInTransaction;
    struct __CFDictionary { } * _statementCache;
}

@property (nonatomic) int additionalOpenFlags;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) long long lastInsertedRowID;

- (void).cxx_destruct;
- (bool)_executeSQL:(id)arg1 cacheStatement:(bool)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (id)_initWithDatabaseURL:(id)arg1;
- (id)_lastErrorWithResultCode:(int)arg1;
- (bool)_prepareStatementForSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 statementHandler:(id /* block */)arg4;
- (bool)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 error:(id*)arg3;
- (int)additionalOpenFlags;
- (void)close;
- (void)dealloc;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)executeUncachedSQL:(id)arg1 error:(id*)arg2;
- (bool)executeUncachedSQLStatements:(id)arg1 error:(id*)arg2;
- (id)fileURL;
- (bool)getIntegerValue:(long long*)arg1 forPragma:(id)arg2 error:(id*)arg3;
- (bool)getUserVersion:(long long*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (bool)isOpen;
- (long long)lastInsertedRowID;
- (int)openWithError:(id*)arg1;
- (bool)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (void)setAdditionalOpenFlags:(int)arg1;
- (bool)setIntegerValue:(long long)arg1 forPragma:(id)arg2 error:(id*)arg3;
- (bool)setUserVersion:(long long)arg1 error:(id*)arg2;
- (bool)truncateWithError:(id*)arg1;

@end
