
@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol> {
    NSMapTable * _acquiredAssertionsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionLock;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableDictionary * _deathHandlers;
    NSHashTable * _expirationWarningClients;
    RBSProcessHandle * _handle;
    NSObject<OS_xpc_object> * _handleConnection;
    NSObject<OS_dispatch_queue> * _handshakeQueue;
    NSMutableSet * _inheritances;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _preventLaunchPredicates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processExpirationLock;
    NSHashTable * _processMonitors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _savedEndowmentLock;
    NSMutableArray * _savedEndowments;
    <RBSConnectionServiceDelegate> * _serviceDelegate;
    unsigned long long  _state;
    NSMutableDictionary * _stateByIdentity;
}

+ (id)connectionQueue;
+ (id)handshakeQueue;
+ (void)setInDaemon;
+ (id)sharedInstance;
+ (id)testConnectionWithConnection:(id)arg1;

- (void).cxx_destruct;
- (id)acquireAssertion:(id)arg1 error:(out id*)arg2;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(bool)arg1 error:(out id*)arg2;
- (oneway void)async_assertionWillInvalidate:(id)arg1;
- (oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
- (oneway void)async_didChangeInheritances:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_observedPreventLaunchPredicatesUpdate:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_observedProcessExitEvents:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;
- (oneway void)async_willExpireAssertionsSoon;
- (id)busyExtensionInstancesFromSet:(id)arg1 error:(out id*)arg2;
- (id)captureStateForSubsystem:(id)arg1 error:(out id*)arg2;
- (void)dealloc;
- (bool)executeLaunchRequest:(id)arg1 process:(out id*)arg2 assertion:(out id*)arg3 error:(out id*)arg4;
- (bool)executeTerminateRequest:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3;
- (id)handleForKey:(id)arg1;
- (id)handleForPredicate:(id)arg1 error:(out id*)arg2;
- (id)hostProcessForInstance:(id)arg1 error:(out id*)arg2;
- (id)identifiersForStateCaptureSubsystems:(out id*)arg1;
- (id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id*)arg3;
- (id)init;
- (void)intendToExit:(id)arg1 withStatus:(id)arg2;
- (bool)invalidateAssertion:(id)arg1 error:(out id*)arg2;
- (bool)invalidateAssertionWithIdentifier:(id)arg1 error:(out id*)arg2;
- (bool)isIdentityAnAngel:(id)arg1 withError:(out id*)arg2;
- (id)lastExitContextForInstance:(id)arg1 error:(out id*)arg2;
- (id)limitationsForInstance:(id)arg1 error:(out id*)arg2;
- (id)portForIdentifier:(id)arg1;
- (id)preventLaunchPredicatesWithError:(out id*)arg1;
- (id)processName:(id)arg1;
- (void)reset;
- (bool)saveEndowment:(id)arg1 withError:(out id*)arg2;
- (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id*)arg3;
- (bool)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id*)arg3;
- (void)subscribeToProcessDeath:(id)arg1 handler:(id /* block */)arg2;
- (void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2;

@end
