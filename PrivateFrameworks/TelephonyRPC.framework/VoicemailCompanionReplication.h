
@interface VoicemailCompanionReplication : NSObject <NPHVMSessionDelegate, PSYSyncCoordinatorDelegate, SYServiceDelegate> {
    NSObject<OS_dispatch_queue> * _companionSyncQueue;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    PSYSyncCoordinator * _coordinator;
    bool  _deltaSyncSuccessful;
    bool  _didSuspendCompanionSyncQueue;
    NPSDomainAccessor * _domainAccessor;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _domainAccessorMutexLock;
    NSCondition * _isSyncingCondition;
    bool  _sigtermCalled;
    bool  _syncRestrictionsAtStartup;
    NSObject<OS_os_transaction> * _syncTransaction;
    NSMutableArray * _vmAfterSyncComplete;
    PSYServiceSyncSession * _vmServiceSyncSession;
    SYService * _vmSyncService;
    NSObject<OS_dispatch_queue> * _vmSyncServiceQueue;
    NPHVMSyncSessionManager * _vmSyncSessionManager;
    _TtC12TelephonyRPC25FTMSVoicemailManager_ObjC * _voicemailManager;
    NSCondition * _voicemailsLoadedCondition;
    NSObject<OS_dispatch_semaphore> * vmdIsReadySemaphore;
    NSObject<OS_dispatch_semaphore> * waitForFirstSyncRestrictionSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSCondition *isSyncingCondition;
@property bool sigtermCalled;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *syncTransaction;
@property (nonatomic, retain) SYService *vmSyncService;
@property (retain) _TtC12TelephonyRPC25FTMSVoicemailManager_ObjC *voicemailManager;
@property (retain) NSCondition *voicemailsLoadedCondition;

- (void).cxx_destruct;
- (bool)_considerMigrationSync;
- (void)_deltaSyncIsReunion:(bool)arg1;
- (void)_enqueueChangesForDeltaSync;
- (void)_enqueueChangesForResetSync;
- (void)_handleVoicemailsChangedNotification:(id)arg1;
- (void)_initializeDomainAccessor;
- (void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(id /* block */)arg1;
- (void)_registerForNotifications;
- (void)_retrySyncSession:(id)arg1;
- (id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2;
- (void)dealloc;
- (void)handleSIGTERM;
- (long long)indexOfVoicemail:(id)arg1 inArray:(id)arg2;
- (id)init;
- (id)isSyncingCondition;
- (id)listOfVoicemailsToSync;
- (id)remoteVoicemails;
- (void)removeFromRemoteVoicemails:(id)arg1;
- (void)reportProgress:(double)arg1;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)serviceDidPairDevice:(id)arg1;
- (void)setIsSyncingCondition:(id)arg1;
- (void)setRemoteVoicemails:(id)arg1;
- (void)setSigtermCalled:(bool)arg1;
- (void)setSyncTransaction:(id)arg1;
- (void)setVmSyncService:(id)arg1;
- (void)setVoicemailManager:(id)arg1;
- (void)setVoicemailsLoadedCondition:(id)arg1;
- (bool)sigtermCalled;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)syncTransaction;
- (id)vmSyncService;
- (id)voicemailChangeSetFrom:(id)arg1;
- (id)voicemailManager;
- (id)voicemailsLoadedCondition;

@end
