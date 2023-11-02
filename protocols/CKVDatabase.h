
@protocol CKVDatabase <NSObject>

@required

- (bool)beginTransactionWithError:(id*)arg1;
- (bool)cleanup:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (CKVDatabaseExecutionResult *)executeCommand:(CKVDatabaseCommand *)arg1 options:(unsigned long long)arg2;
- (bool)executeCommandString:(NSString *)arg1 error:(id*)arg2;
- (bool)openWithError:(id*)arg1;
- (NSString *)path;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (int)rowsModified:(id*)arg1;

@end
