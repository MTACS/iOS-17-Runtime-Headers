
@interface FBWorkspaceScene : NSObject <BSDescriptionProviding, FBSSceneAgentProxy, FBSSceneHandle> {
    NSMutableArray * _agentSessions;
    FBSSceneDefinition * _definition;
    <FBSceneHost> * _host;
    <FBSSceneHostAgent> * _hostAgent;
    FBSSceneIdentity * _identity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBSSceneClientSettings * _lock_clientSettings;
    bool  _lock_invalidated;
    unsigned char  _lock_lifecycleState;
    NSMutableArray * _lock_sceneCreatedBlocks;
    bool  _lock_sentSceneCreate;
    FBSSceneSettings * _lock_settings;
    NSString * _logProem;
    BOOL  _queue_activityMode;
    unsigned char  _queue_assertionState;
    unsigned long long  _queue_inFlightExternallyManagedEvents;
    unsigned long long  _queue_inFlightLifecycleEvents;
    unsigned long long  _queue_inFlightUpdateAllowsThrottling;
    unsigned long long  _queue_inFlightUpdateDisallowsThrottling;
    unsigned long long  _queue_inFlightUpdateEvents;
    <BSInvalidatable> * _queue_workspaceAssertion;
    bool  _reconnect;
    FBWorkspace * _workspace;
    FBSSerialQueue * _workspaceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneHost> *host;
@property (nonatomic, readonly, copy) FBSSceneIdentity *identity;
@property (nonatomic, readonly) FBWorkspace *parentWorkspace;
@property (nonatomic, readonly, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

+ (unsigned char)_sceneActionForLifecycleFromState:(unsigned char)arg1 toState:(unsigned char)arg2;

- (void).cxx_destruct;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)arg1 allowThrottling:(bool)arg2 externallyManaged:(bool)arg3;
- (void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)arg1 allowThrottling:(bool)arg2 externallyManaged:(bool)arg3;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1;
- (void)_workspaceQueue_sendMessageToClient:(id /* block */)arg1;
- (void)_workspaceQueue_sendSceneCreateToClient:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_workspaceQueue_sendSceneUpdateToClient:(id)arg1 settingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_workspaceQueue_updateAssertion;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (id)callOutQueue;
- (id)clientProcess;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)host;
- (id)hostProcess;
- (id)identifier;
- (id)identity;
- (id)initWithWorkspace:(id)arg1 host:(id)arg2 settings:(id)arg3 clientSettings:(id)arg4 fromRemnant:(bool)arg5;
- (void)invalidate;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (id)parentWorkspace;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
