
@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    _MSVSQLConnection * _connection;
    NSURL * _databaseURL;
}

@property (nonatomic, copy) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)databaseURL;
- (id)description;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatementString:(id)arg1 error:(id*)arg2;
- (id)initWithMemory;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)markdownTableForSQL:(id)arg1;
- (id)markdownTableForStatement:(id)arg1;
- (id)markdownTableForTableNamed:(id)arg1;
- (void)registerAggregateFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 start:(id /* block */)arg4 add:(id /* block */)arg5 remove:(id /* block */)arg6 value:(id /* block */)arg7;
- (void)registerFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)resultsForStatement:(id)arg1;
- (void)setDatabaseURL:(id)arg1;
- (id)statementWithString:(id)arg1 error:(id*)arg2;
- (id)transactionWithName:(id)arg1 error:(id*)arg2;
- (void)unregisterFunctionNamed:(id)arg1 arguments:(long long)arg2;

@end
