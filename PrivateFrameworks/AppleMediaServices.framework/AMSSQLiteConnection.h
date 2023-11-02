
@interface AMSSQLiteConnection : NSObject {
    NSMutableArray * _afterTransactionBlocks;
    struct sqlite3 { } * _database;
    <AMSSQLiteConnectionDelegate> * _delegate;
    bool  _didResetForCorruption;
    AMSSQLiteConnectionOptions * _options;
    NSMapTable * _preparedStatements;
    long long  _transactionDepth;
    bool  _transactionWantsRollback;
}

@property (nonatomic, readonly, copy) NSError *currentError;
@property (nonatomic) <AMSSQLiteConnectionDelegate> *delegate;
@property (nonatomic, readonly) long long lastChangeCount;
@property (nonatomic, readonly, copy) AMSSQLiteConnectionOptions *options;

- (void).cxx_destruct;
- (bool)_close;
- (bool)_executeStatement:(id)arg1 error:(id*)arg2;
- (bool)_executeWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (bool)_openAndAllowRetry:(bool)arg1 error:(id*)arg2;
- (bool)_openWithError:(id*)arg1;
- (bool)_performResetAfterCorruptionError;
- (id)_prepareStatement:(id)arg1 error:(id*)arg2;
- (bool)_resetAfterCorruptionError;
- (bool)_resetAfterIOError;
- (id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2;
- (bool)close;
- (id)currentError;
- (void)dealloc;
- (id)delegate;
- (void)dispatchAfterTransaction:(id /* block */)arg1;
- (void)executePreparedQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (void)executeQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (bool)executeWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (bool)finalizePreparedStatement:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1;
- (long long)lastChangeCount;
- (bool)openWithError:(id*)arg1;
- (id)options;
- (void)performTransaction:(id /* block */)arg1;
- (id)prepareStatement:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)truncate;

@end
