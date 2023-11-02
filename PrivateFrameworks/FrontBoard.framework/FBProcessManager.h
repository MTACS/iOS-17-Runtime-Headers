
@interface FBProcessManager : NSObject <FBProcessDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bootstrapLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bootstrapPredicatesLock;
    NSMutableSet * _bootstrap_bootstrappingProcesses;
    NSMutableSet * _bootstrap_pendingProcesses;
    NSMutableSet * _bootstrap_processPredicates;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    FBProcess * _currentProcess;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSAssertion * _lock_assertion;
    bool  _lock_initializationComplete;
    NSHashTable * _lock_observers;
    NSMutableDictionary * _lock_processesByIdentity;
    NSMutableDictionary * _lock_processesByPID;
    NSMutableDictionary * _lock_processesByVersionedPID;
    <FBProcessWatchdogProviding> * _noDirectAccess_defaultWatchdogPolicy;
    RBSProcessMonitor * _processMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <FBProcessWatchdogProviding> *defaultWatchdogPolicy;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FBApplicationProcess *systemApplicationProcess;

+ (id)_sharedInstanceCreateIfNeeded:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (id)_bootstrapProcessWithExecutionContext:(id)arg1 synchronously:(bool)arg2 error:(out id*)arg3;
- (id)_bootstrapProcessWithHandle:(id)arg1 synchronously:(bool)arg2 error:(out id*)arg3;
- (void)_bootstrap_consumeLock_addProcess:(id)arg1;
- (void)_bootstrap_consumeLock_addProcess:(id)arg1 synchronously:(bool)arg2;
- (id)_createProcessFutureForProcessHandle:(id)arg1 error:(out id*)arg2;
- (id)_createProcessFutureWithExecutionContext:(id)arg1 error:(out id*)arg2;
- (id)_createProcessWithExecutionContext:(id)arg1 error:(out id*)arg2;
- (void)_noteShellInitializationComplete;
- (void)_notifyObserversUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_reallyRegisterProcessForHandle:(id)arg1;
- (void)_removeProcess:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allApplicationProcesses;
- (id)allProcesses;
- (id)applicationProcessForPID:(int)arg1;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)currentProcess;
- (void)dealloc;
- (id)defaultWatchdogPolicy;
- (id)description;
- (id)init;
- (oneway void)launchProcessWithContext:(id)arg1;
- (void)noteProcessAssertionStateDidChange:(id)arg1;
- (void)noteProcessDidExit:(id)arg1;
- (void)noteProcessDidLaunch:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)processForPID:(int)arg1;
- (id)processForVersionedPID:(long long)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (id)registerProcessForAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)registerProcessForHandle:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDefaultWatchdogPolicy:(id)arg1;
- (id)systemApplicationProcess;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;

@end
