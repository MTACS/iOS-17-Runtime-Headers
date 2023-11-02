
@protocol MSVSQLExecutable <NSObject>

@required

- (bool)executeStatement:(MSVSQLStatement *)arg1 error:(id*)arg2;
- (bool)executeStatementString:(NSString *)arg1 error:(id*)arg2;
- (MSVSQLRowEnumerator *)resultsForStatement:(MSVSQLStatement *)arg1;
- (MSVSQLStatement *)statementWithString:(NSString *)arg1 error:(id*)arg2;

@end
