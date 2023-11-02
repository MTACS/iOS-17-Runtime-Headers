
@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    id /* block */  _appDictionaryEnumBlock;
    NSXPCConnection * _connection;
    bool  _delegatesComplete;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _delegatesCompleteCond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _delegatesCompleteCondMutex;
    NSError * _delegatesCompleteError;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ appDictionaryEnumBlock;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool delegatesComplete;
@property (nonatomic, retain) NSError *delegatesCompleteError;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)installerWithAppDictionaryEnumerator:(id /* block */)arg1;
+ (id)installerWithProgressBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (id)_waitForPendingDelegateMessages;
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 withCompletion:(id /* block */)arg4;
- (id /* block */)appDictionaryEnumBlock;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (bool)clearTestFlags:(unsigned long long)arg1 withError:(id*)arg2;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg1 personaUniqueString:(id)arg2 atResultURL:(id)arg3 onDevice:(int)arg4 withCompletion:(id /* block */)arg5;
- (void)dealloc;
- (void)delegateMessageDeliveryCompleteWithError:(id)arg1;
- (bool)delegatesComplete;
- (id)delegatesCompleteError;
- (void)dieForTesting;
- (bool)endTestMode:(id*)arg1;
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)finalizeReference:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getAppMetadataForApp:(id)arg1 completion:(id /* block */)arg2;
- (bool)getTestModeEnabled:(bool*)arg1 outError:(id*)arg2;
- (id)init;
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 returningResultInfo:(bool)arg5 completion:(id /* block */)arg6;
- (void)invalidateReference:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)listSafeHarborsOfType:(unsigned long long)arg1 forPersona:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (int)pidForTesting;
- (id /* block */)progressBlock;
- (id)queue;
- (id)raiseException;
- (void)referencesForBundleWithIdentifier:(id)arg1 inDomain:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)registerContentsForDiskImageAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)registerPlaceholderForReference:(id)arg1 completion:(id /* block */)arg2;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentity:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)removeSafeHarborForIdentity:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)reportProgress:(id)arg1;
- (void)revertForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)setAppDictionaryEnumBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegatesComplete:(bool)arg1;
- (void)setDelegatesCompleteError:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSystemAppMigrationComplete:(id /* block */)arg1;
- (bool)setTestFlags:(unsigned long long)arg1 withError:(id*)arg2;
- (bool)setTestMode:(id*)arg1;
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)systemAppMigratorHasCompleted:(id /* block */)arg1;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterContentsForDiskImageAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id /* block */)arg4;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id /* block */)arg4;
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(id /* block */)arg3;
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(id /* block */)arg4;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(id /* block */)arg4;
- (void)waitForSystemAppMigratorToComplete:(id /* block */)arg1;
- (void)waitForSystemAppMigratorWithCompletion:(id /* block */)arg1;

@end
