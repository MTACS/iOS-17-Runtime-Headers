
@interface _PFUbiquityRecordsImporter : NSObject <NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate, _PFUbiquityRecordImportOperationDelegate> {
    bool  _allowBaselineRoll;
    bool  _importOnlyActiveStores;
    NSOperationQueue * _importQueue;
    bool  _isMonitoring;
    NSString * _localPeerID;
    NSObject<OS_dispatch_source> * _logRestartTimer;
    NSString * _modelVersionHash;
    unsigned long long  _numPendingNotifications;
    unsigned long long  _pendingImportOperationsCount;
    NSPersistentStoreCoordinator * _privatePSC;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSSQLCore * _privateStore;
    PFUbiquityRecordsImporterSchedulingContext * _schedulingContext;
    NSRecursiveLock * _schedulingLock;
    PFUbiquitySwitchboardCacheWrapper * _sideLoadCacheWrapper;
    NSString * _storeName;
    bool  _throttleNotifications;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)scheduleRecoveryTimer;

@end
