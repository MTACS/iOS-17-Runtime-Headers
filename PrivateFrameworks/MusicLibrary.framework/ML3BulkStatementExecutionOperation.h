
@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation

- (bool)_execute:(id*)arg1;
- (bool)_executeStatements:(id)arg1 onConnection:(id)arg2 withError:(id*)arg3;
- (unsigned long long)type;

@end
