
@protocol EDProtectedDatabasePersistenceReconciliationMergeHandler

@required

- (unsigned long long)handleReconciliationMergeErrorForTable:(NSString *)arg1 columnName:(NSString *)arg2 statement:(EFSQLUpdateStatement *)arg3 journalRowID:(NSNumber *)arg4 protectedRowID:(NSNumber *)arg5 connection:(EDPersistenceDatabaseConnection *)arg6 rowsUpdated:(unsigned long long*)arg7 error:(id*)arg8;

@end
