
@interface PLBackgroundJobPersonSyncWorker : PLBackgroundJobWorker {
    NSPersistentHistoryToken * _cancelledWorkItem;
    NSSet * _propertiesToIgnore;
    PLPhotoLibraryBundle * _testingSourceBundle;
}

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;
@property (retain) PLPhotoLibraryBundle *testingSourceBundle;

+ (bool)_isTokenInvalidError:(id)arg1;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)usesMultipleLibrariesConcurrently;

- (void).cxx_destruct;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)arg1;
- (void)_deletePersonWithUuid:(id)arg1 fromLibrary:(id)arg2;
- (id)_faceCropUuidsFromLibrary:(id)arg1 error:(id*)arg2;
- (id)_faceCropUuidsMissingFromList:(id)arg1 inLibrary:(id)arg2 error:(id*)arg3;
- (id)_lastPersonSyncSourceLibraryURLFromSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)_lastPersonSyncTokenFromLibrary:(id)arg1;
- (void)_processNextPersonInChangedObjectIDs:(id)arg1 fromSourceLibrary:(id)arg2 toDestLibrary:(id)arg3 group:(id)arg4 workItem:(id)arg5 deletedUuids:(id)arg6 errorHandler:(id /* block */)arg7;
- (void)_resetCancelledWorkItem;
- (void)_resetFacesProcessingForPerson:(id)arg1;
- (bool)_resetPersonSyncInTargetLibrary:(id)arg1 error:(id*)arg2;
- (void)_savePersonSyncToken:(id)arg1 toLibrary:(id)arg2;
- (void)_setupPropertiesToIgnoreWithSourceLibrary:(id)arg1;
- (bool)_shouldCancelCurrentWorkItem:(id)arg1;
- (id)_sourcePhotoLibraryWithName:(const char *)arg1;
- (bool)_syncFaceCropsFromLibrary:(id)arg1 toLibrary:(id)arg2 error:(id*)arg3;
- (void)_syncPerson:(id)arg1 toLibrary:(id)arg2 completion:(id /* block */)arg3;
- (bool)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)_transactionIteratorSinceLastToken:(id)arg1 sourceLibrary:(id)arg2 error:(id*)arg3;
- (id)_transactionIteratorSinceTokenIfValid:(id)arg1 sourceLibrary:(id)arg2 error:(id*)arg3;
- (void)_updateLastPersonSyncSourceLibraryURLWithSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)cancelledWorkItem;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)setCancelledWorkItem:(id)arg1;
- (void)setTestingSourceBundle:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (id)testingSourceBundle;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
