
@interface RBProcessManager : NSObject <RBLaunchManagerDelegate, RBProcessManaging, RBStateCapturing> {
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    _Atomic unsigned long long  _counter;
    <RBProcessManagerDelegate> * _delegate;
    <RBEntitlementManaging> * _entitlementManager;
    <RBHistoricalStatisticsMaintaining> * _historicalStatistics;
    NSMutableDictionary * _identityToPendingExitBlock;
    NSMutableDictionary * _identityToProcessLifecycleQueue;
    <RBJetsamPropertyManaging> * _jetsamPropertytManager;
    RBLaunchdJobManager * _jobManager;
    RBLaunchManager * _launchManager;
    NSCountedSet * _lifecycleQueuesInUse;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingExitBlockLock;
    RBPrewarmManager * _prewarmManager;
    RBProcessIndex * _processGraveyard;
    RBProcessIndex * _processIndex;
    RBProcessMap * _processState;
    bool  _systemPreventsIdleSleep;
    RBSystemState * _systemState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

+ (id)stateApplicationQueue;

- (void).cxx_destruct;
- (bool)_canTerminateProcess:(id)arg1 withContext:(id)arg2 error:(out id*)arg3;
- (void)_enqueueGuaranteedRunningLaunchForIdentity:(id)arg1 atTime:(double)arg2;
- (void)_executeLifecycleEventForIdentity:(id)arg1 sync:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)_getLifecycleQueueForIdentity:(id)arg1;
- (id)_lifecycleQueue_addProcessWithInstance:(id)arg1 properties:(id)arg2;
- (bool)_preflightCheck:(id)arg1;
- (id)_processForIdentifier:(id)arg1;
- (id)_processForIdentifier:(id)arg1 withAuditToken:(id)arg2 forceStartTracking:(bool)arg3;
- (id)_processForInstance:(id)arg1;
- (void)_releaseLifecycleQueueForIdentity:(id)arg1;
- (void)_removeProcess:(id)arg1;
- (id)_resolveProcessWithIdentifier:(id)arg1 auditToken:(id)arg2 properties:(id*)arg3;
- (id)_sharedPreflightManager;
- (void)applySystemState:(id)arg1;
- (id)busyExtensionInstancesFromSet:(id)arg1;
- (id)captureState;
- (id)debugDescription;
- (void)didUpdateProcessStates:(id)arg1 completion:(id /* block */)arg2;
- (id)executeLaunchRequest:(id)arg1 withError:(out id*)arg2;
- (void)executeTerminateRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithBundlePropertiesManager:(id)arg1 entitlementManager:(id)arg2 jetsamPropertytManager:(id)arg3 timeProvider:(id)arg4 historialStatistics:(id)arg5 delegate:(id)arg6;
- (bool)isActiveProcess:(id)arg1;
- (id)processForAuditToken:(id)arg1;
- (id)processForIdentifier:(id)arg1;
- (id)processForIdentifierWithoutStartingTracking:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)processForInstance:(id)arg1;
- (id)processesMatchingPredicate:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)start;
- (id)stateCaptureTitle;
- (void)systemPreventIdleSleepStateDidChange:(bool)arg1;

@end
