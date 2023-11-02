
@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    _MFSearchMatcherContext * _CPSearchContext;
    void * _ICUSearchContext;
}

- (void).cxx_destruct;
- (int)configureSQLConnection;
- (void)dealloc;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (bool)performWithOptions:(unsigned long long)arg1 transactionError:(id*)arg2 block:(id /* block */)arg3;
- (long long)transactionTypeForWriting;

@end
