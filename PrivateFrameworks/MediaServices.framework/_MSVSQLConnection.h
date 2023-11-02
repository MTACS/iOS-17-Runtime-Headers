
@interface _MSVSQLConnection : NSObject <MSVSQLExecutable> {
    NSMutableArray * _aggregateFunctions;
    NSMutableDictionary * _attachedDatabases;
    struct sqlite3 { } * _connectionHandle;
    NSString * _databaseURI;
    bool  _invalid;
    unsigned long long  _options;
    NSMutableArray * _scalarFunctions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cloneWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (void)_registerAggregateFunctionDescriptor:(id)arg1;
- (void)_registerScalarFunctionDescriptor:(id)arg1;
- (void)dealloc;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatementString:(id)arg1 error:(id*)arg2;
- (void)registerAggregateFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 start:(id /* block */)arg4 add:(id /* block */)arg5 remove:(id /* block */)arg6 value:(id /* block */)arg7;
- (void)registerFunctionNamed:(id)arg1 arguments:(long long)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)resultsForStatement:(id)arg1;
- (id)statementWithString:(id)arg1 error:(id*)arg2;
- (void)unregisterFunctionNamed:(id)arg1 arguments:(long long)arg2;

@end
