
@interface REMDatabaseMigrationContext : NSObject {
    REMStore * _cachedStore;
    REMStoreContainerToken * _containerToken;
    bool  _hasPerformedEnsureAccountsExist;
    NSError * _lastReportedError;
    NSString * _lastReportedErrorIdentifier;
    unsigned long long  _lastReportedErrorStage;
    NSDate * _migrationStartDate;
}

@property (nonatomic, retain) REMStore *cachedStore;
@property (nonatomic, retain) REMStoreContainerToken *containerToken;
@property (nonatomic) bool hasPerformedEnsureAccountsExist;
@property (nonatomic) bool isDatabaseMigrated;
@property (nonatomic, retain) NSError *lastReportedError;
@property (nonatomic, retain) NSString *lastReportedErrorIdentifier;
@property (nonatomic) unsigned long long lastReportedErrorStage;
@property (nonatomic, retain) NSDate *migrationStartDate;
@property (nonatomic, readonly) bool shouldDeleteMigratedData;

- (void).cxx_destruct;
- (bool)_cleanLocalDatabases:(id*)arg1;
- (void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1;
- (void)_postMigrationLocalAccountCleanup;
- (id)cachedStore;
- (id)containerToken;
- (void)dealloc;
- (void)destroySandboxContainerIfNecessary;
- (bool)ensureAccountsExist:(id*)arg1;
- (bool)ensureAccountsExist:(id)arg1 error:(id*)arg2;
- (bool)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id*)arg2;
- (bool)hasPerformedEnsureAccountsExist;
- (id)init;
- (id)initWithSandboxDatabaseEnabled:(bool)arg1;
- (bool)isDatabaseMigrated;
- (id)lastReportedError;
- (id)lastReportedErrorIdentifier;
- (unsigned long long)lastReportedErrorStage;
- (id)migrationStartDate;
- (id)remStore;
- (void)reportMigrationDidFinishWithSuccess:(bool)arg1;
- (void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4;
- (void)reportMigrationWillBegin;
- (void)setCachedStore:(id)arg1;
- (void)setContainerToken:(id)arg1;
- (void)setHasPerformedEnsureAccountsExist:(bool)arg1;
- (void)setIsDatabaseMigrated:(bool)arg1;
- (void)setLastReportedError:(id)arg1;
- (void)setLastReportedErrorIdentifier:(id)arg1;
- (void)setLastReportedErrorStage:(unsigned long long)arg1;
- (void)setMigrationStartDate:(id)arg1;
- (void)setShouldDataAccessStopSyncingReminders:(bool)arg1;
- (bool)shouldDeleteMigratedData;

@end
