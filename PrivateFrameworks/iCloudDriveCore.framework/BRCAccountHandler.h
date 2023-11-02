
@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString * _acAccountID;
    NSString * _accountPath;
    BRDSIDString * _dbAccountDSID;
    NSHashTable * _delegates;
    bool  _doesNotHaveEnoughDiskSpaceToBeFunctional;
    bool  _finishedLoading;
    bool  _hasSetMigrationComplete;
    NSError * _loggedOutError;
    NSObject<OS_dispatch_queue> * _migrationStatusSetterQueue;
    NSObject<OS_dispatch_workloop> * _pushWorkloop;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    NSMutableDictionary * _syncPolicyByFolderType;
    NSString * _ubiquityTokenSalt;
}

@property (nonatomic, readonly) NSString *acAccountID;
@property (nonatomic, readonly) NSString *accountPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (nonatomic, readonly) bool finishedLoading;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *loggedOutError;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

+ (void)_migrateAccountIfNecessaryForAccountDSID:(id)arg1;
+ (id)currentiCloudAccount;
+ (id)currentiCloudAccountID;

- (void).cxx_destruct;
- (void)__destroySessionWithIntents:(id)arg1;
- (bool)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (bool)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (unsigned char)_handleOpenError:(id)arg1;
- (bool)_loadOnDiskAccountSessionSecondTry:(id)arg1 prevError:(id)arg2;
- (bool)_loadOnDiskAccountSessionWithError:(id*)arg1;
- (bool)_shouldRetryOpenSession:(unsigned char)arg1;
- (unsigned char)_tryToOpenSession:(id)arg1 error:(id*)arg2;
- (void)_updateAccountToDSID:(id)arg1;
- (id)acAccountID;
- (id)accountPath;
- (void)addDelegate:(id)arg1;
- (void)addFileProviderDomainForAccount:(id)arg1 error:(id*)arg2;
- (bool)checkEnoughDiskSpaceToBeFunctional;
- (bool)createAccountSessionWithDSID:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)destroyCurrentAccountSynchronously;
- (bool)destroySessionSynchronously;
- (bool)doesNotHaveEnoughDiskSpaceToBeFunctional;
- (bool)finishedLoading;
- (id)initWithACAccountID:(id)arg1;
- (void)jetsamCloudDocsApps;
- (id)loggedOutError;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)pushWorkloop;
- (void)reloadSyncedFolderPolicies;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(bool)arg1;
- (void)removeDelegate:(id)arg1;
- (id)session;
- (bool)setDBAccountDSID:(id)arg1;
- (void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(bool)arg1;
- (void)setLoggedOutError:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(bool)arg3 completion:(id /* block */)arg4;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(bool)arg3 shouldPostAccountChangedNotification:(bool)arg4 completion:(id /* block */)arg5;
- (void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (bool)shouldLastCiconiaRunConsideredAsSuccessForFPFSMigrationRollup;
- (void)startAndLoadAccountSynchronously:(id)arg1;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1;
- (id)ubiquityTokenSalt;

@end
