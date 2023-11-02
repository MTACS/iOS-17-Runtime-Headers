
@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    id /* block */  _migrationCompletionHandler;
    <FCCKDatabaseMigrator> * _migrator;
    NSMutableArray * _resultRecordIDsEligibleForDeletion;
    NSMutableArray * _resultZoneIDsEligibleForDeletion;
}

- (void).cxx_destruct;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
