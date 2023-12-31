
@interface CKVIndexManager : NSObject <KVSkitAccessProvider> {
    CKVFilesystemBase * _filesystemBase;
    CKVGlobalInfoLog * _globalLog;
    NSMutableDictionary * _instanceLogCache;
    NSDate * _migrationStartTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _readOnlyDatabaseCache;
    NSMutableDictionary * _readOnlySkitCache;
    CKVSettings * _settings;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) CKVSettings *settings;

+ (id)sharedReaderInstance;

- (void).cxx_destruct;
- (id)_accessReadOnlyDatabaseForAllUsers;
- (void)_cacheAllLocalAccess;
- (id)_cachedReadOnlyDatabaseAccessAtDataDirectoryURL:(id)arg1;
- (id)_cachedReadOnlySkitAccessAtDataDirectoryURL:(id)arg1;
- (void)_cleanupSnapshotDirectory;
- (void)_clearAllCachedAccessAtDataDirectory:(id)arg1;
- (void)_clearAllCaches;
- (void)_clearCachedDatabaseAccessAtDataDirectory:(id)arg1;
- (void)_clearCachedSkitAccessAtDataDirectory:(id)arg1;
- (bool)_dataDirectoryExists:(id)arg1;
- (id)_dataDirectoryURLForUser:(id)arg1;
- (bool)_deleteDataForUser:(id)arg1 deviceId:(id)arg2 ifMatching:(bool)arg3 didDelete:(bool*)arg4;
- (bool)_destroySkitAtDataDirectory:(id)arg1;
- (bool)_destroySpeechProfileAtDataDirectory:(id)arg1;
- (bool)_destroyStateAtDataDirectory:(id)arg1;
- (unsigned short)_executeDatabaseAndSkitTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_executeDatabaseTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_executeDatabaseTransactionWithDatabase:(id)arg1 instanceLog:(id)arg2 description:(id)arg3 usingBlock:(id /* block */)arg4;
- (bool)_executeSkitRebuildTransactionAtDataDirectory:(id)arg1 description:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)_executeSkitRebuildTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_getFilesSortedByCreationDateForDirectoryPath:(id)arg1;
- (bool)_initiateMigration:(bool)arg1;
- (id)_instanceLogAtDataDirectory:(id)arg1;
- (void)_loadGlobalLog;
- (id)_localDataDirectoryURL;
- (id)_localDatabaseFileURL;
- (id)_localSkitDirectoryURL;
- (id)_openReadWriteDatabaseOrCreate:(bool)arg1 atDataDirectory:(id)arg2 description:(id)arg3;
- (int)_protectionClassForDataDirectory:(id)arg1;
- (bool)_purgeProfileSnapshots;
- (bool)_rebuildSpeechProfileForUser:(id)arg1;
- (void)_refreshRankedItemCachesAtDataDirectory:(id)arg1 description:(id)arg2 userId:(id)arg3;
- (void)_registerTrialExperimentUpdateHandler;
- (bool)_resetAllState;
- (bool)_shouldCleanupDatabaseAtDataDirectory:(id)arg1 instanceLog:(id)arg2;
- (bool)_shouldRunMigration;
- (id)_snapshotDirectoryURL;
- (void)_speechProfileAccessAtDataDirectory:(id)arg1 userId:(id)arg2 description:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_speechProfileAccessForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_verifyAllManagedDataDirectories;
- (void)_verifySkitAtDataDirectory:(id)arg1 description:(id)arg2 clean:(bool)arg3 shouldDefer:(id /* block */)arg4;
- (void)_verifySpeechProfileAtDataDirectory:(id)arg1 description:(id)arg2 userId:(id)arg3 clean:(bool)arg4;
- (id)_writeOnlySkitAccessAtDataDirectory:(id)arg1 description:(id)arg2 flushThreshold:(unsigned long long)arg3;
- (id)accessReadOnlyDatabaseForAllUsers;
- (id)accessReadOnlyDatabaseForUser:(id)arg1;
- (id)accessReadOnlySkitForUser:(id)arg1;
- (id)captureProfileSnapshot:(id)arg1;
- (void)closeAllConnections;
- (void)completeMigration;
- (bool)deleteDataForUser:(id)arg1;
- (bool)deleteDataForUser:(id)arg1 deviceId:(id)arg2 ifMatching:(bool)arg3 didDelete:(bool*)arg4;
- (id)findProfileSnapshotsNearDate:(id)arg1;
- (id)init;
- (id)initWithFilesystemBase:(id)arg1 settings:(id)arg2 isWriter:(bool)arg3;
- (bool)initiateMigration:(bool)arg1;
- (id)lastMaintenanceForUser:(id)arg1;
- (unsigned short)performMaintenanceWithShouldDefer:(id /* block */)arg1;
- (void)performSkitVerification;
- (void)performSpeechProfileVerification;
- (bool)rebuildSpeechProfileForUser:(id)arg1;
- (void)registerSpeechProfileUpdateForUser:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3 fieldTypes:(id)arg4 options:(unsigned short)arg5;
- (bool)resetAllState;
- (void)resetWithFilesystemBase:(id)arg1;
- (bool)setItems:(id)arg1 error:(id*)arg2;
- (id)settings;
- (unsigned char)storedEnablementOptions;
- (void)storedSiriLanguageCode:(id*)arg1 dictationLanguageCodes:(id*)arg2;
- (unsigned short)submitDatabaseAndSkitTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)submitDatabaseTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)submitSkitRebuildTransactionForUser:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)supportsMultiUser;
- (bool)updateStoredEnablementOptions:(unsigned char)arg1;
- (bool)updateStoredSiriLanguageCode:(id)arg1 dictationLanguageCodes:(id)arg2;
- (id)userIdHash:(id)arg1;

@end
