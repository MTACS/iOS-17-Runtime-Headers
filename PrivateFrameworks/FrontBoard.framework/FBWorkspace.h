
@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProvider, FBSceneClientProviderInternal> {
    BSCompoundAssertion * _compoundAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned char  _lock_activeAssertionState;
    long long  _lock_activeInterruptionPolicy;
    RBSAssertion * _lock_afterlifeAssertion;
    RBSAssertion * _lock_connectAssertion;
    BSServiceConnection<BSServiceConnectionHost> * _lock_connection;
    bool  _lock_didReceiveHandshake;
    FBWorkspaceEventDispatcherSource * _lock_eventDispatcherSource;
    NSMutableDictionary * _lock_identityToRemnantsMap;
    NSMutableDictionary * _lock_identityToSceneMap;
    bool  _lock_invalidated;
    NSMutableSet * _lock_invalidationActions;
    RBSAssertion * _lock_lifeAssertion;
    NSMutableArray * _lock_pendedRequests;
    NSMutableArray * _lock_waitForConnectBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldInjectEndpoint;
    bool  _test_rejectAllSceneClients;
    <FBWorkspaceDelegate> * _weak_delegate;
    FBProcess * _weak_process;
    FBSSerialQueue * _workspaceQueue;
    RBSAssertion * _workspaceServiceInjector;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;
@property (setter=test_setRejectAllSceneClients:, nonatomic) bool test_rejectAllSceneClients;

- (void).cxx_destruct;
- (id)_acquireAssertionForReason:(id)arg1 withState:(unsigned char)arg2;
- (void)_callOutQueue_requestScene:(id)arg1;
- (void)_handleSceneRequest:(id)arg1;
- (void)_lock_enqueueConnectBlock:(id /* block */)arg1;
- (void)_lock_fireInvalidationAction;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (id)_sceneForHost:(id)arg1;
- (id)_sceneForIdentity:(id)arg1;
- (void)_terminateWithReason:(id)arg1;
- (id)_unregisterSceneForHost:(id)arg1;
- (void)_updateProcessAssertionState;
- (id)auditToken;
- (oneway void)createSceneWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)createServiceQueue;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (oneway void)handshakeWithRemnants:(id)arg1;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)process;
- (id)registerHost:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 fromRemnant:(id)arg4 error:(out id*)arg5;
- (void)registerInvalidationAction:(id)arg1;
- (oneway void)requestSceneWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2 forExtension:(id)arg3;
- (oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)test_rejectAllSceneClients;
- (void)test_setRejectAllSceneClients:(bool)arg1;
- (void)unregisterHost:(id)arg1;
- (oneway void)workspaceID:(id)arg1 sendActions:(id)arg2 completion:(id /* block */)arg3;

@end
