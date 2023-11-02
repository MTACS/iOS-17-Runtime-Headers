
@interface FCCKDatabaseZoneMigrationOperation : FCOperation {
    NSMutableSet * _createdZones;
    FCCKPrivateDatabase * _database;
    id /* block */  _migrationCompletionHandler;
    <FCCKDatabaseMigrator> * _migrator;
    <FCCKZonePruningAssistant> * _pruningAssistant;
    CKRecordZoneID * _recordZoneID;
    NSMutableArray * _resultRecordIDsEligibleForDeletion;
    NSMutableArray * _resultZoneIDsEligibleForDeletion;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
