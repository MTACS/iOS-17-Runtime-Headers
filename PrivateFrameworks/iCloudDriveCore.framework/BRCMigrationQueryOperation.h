
@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    CKQueryCursor * _continuationCursor;
    NSString * _migrationKey;
    NSMutableArray * _shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)documentSharesMigrationKey;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;

- (void).cxx_destruct;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(id /* block */)arg1;
- (void)_performAfterQueryingForShareIDsOfFolders:(bool)arg1 completion:(id /* block */)arg2;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(id /* block */)arg2 cursorUpdatedBlock:(id /* block */)arg3 desiredKeys:(id)arg4 completion:(id /* block */)arg5;
- (bool)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id*)arg3;
- (bool)_updatedContinuationCursor:(id)arg1 fetchedRecords:(id)arg2 error:(id*)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
