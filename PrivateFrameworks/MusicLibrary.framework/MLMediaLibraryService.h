
@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {
    NSMutableDictionary * _progressBlocksByUUID;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _serviceConnection;
    <MLMediaLibraryServiceProtocol> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;

- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)beginTransactionForDatabaseWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)beginTransactionForDatabaseWithContext:(id)arg1 error:(id*)arg2;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)clientImportServiceListenerEndpointWithError:(id*)arg1;
- (void)dealloc;
- (bool)endTransaction:(id)arg1 shouldCommit:(bool)arg2 error:(id*)arg3;
- (void)endTransaction:(id)arg1 shouldCommit:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (bool)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)getLanguageResourcesWithCompletion:(id /* block */)arg1;
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (id)init;
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id*)arg1;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)performDiagnosticWithCompletionHandler:(id /* block */)arg1;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)setOptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)unlockDatabaseWithCompletion:(id /* block */)arg1;
- (void)updateSiriIndexMetadataForAllLibrariesWithCompletion:(id /* block */)arg1;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)validateDatabaseAtPath:(id)arg1 error:(id*)arg2;

@end
