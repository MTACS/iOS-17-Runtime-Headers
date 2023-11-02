
@interface SBSceneHostingDisplayControllerProvider : NSObject <FBSDisplayTransformer, SBDisplayControllerProviding, SBDisplayManagerObserver, SBDisplayWindowingModeResolverDelegate> {
    SBDisplayManager * _displayManager;
    <BSInvalidatable> * _displayManagerObserverToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_capableRootDisplaysToResolverMap;
    NSMutableSet * _lock_derivedDisplaysAwaitingConnection;
    NSMapTable * _lock_rootDisplaysToControllerMap;
    <SBSceneHostingDisplayControllerPolicyFactory> * _policyFactory;
    <SBWindowingModeResolverFactory> * _resolverFactory;
    SBDisplayTransformerRegistry * _transformerRegistry;
    <BSInvalidatable> * _transformerToken;
    FBWorkspaceEventQueue * _workspaceEventQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayControllerInfoForConnectingDisplay:(id)arg1 configuration:(id)arg2;
- (void)displayManager:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayManager:(id)arg1 didDisconnectIdentity:(id)arg2;
- (id)initWithTransformerRegistry:(id)arg1 displayManager:(id)arg2 workspaceEventQueue:(id)arg3 displayModeResolverFactory:(id)arg4 policyFactory:(id)arg5;
- (void)resolver:(id)arg1 rootDisplay:(id)arg2 didUpdateAvailability:(bool)arg3;
- (id)transformDisplayConfiguration:(id)arg1;

@end
