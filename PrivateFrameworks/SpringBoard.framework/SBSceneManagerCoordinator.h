
@interface SBSceneManagerCoordinator : NSObject <BLSSceneDelegateWithActionHandlers, FBSDisplayObserving, FBSceneDelegate, FBSceneManagerDelegate_Private, FBSceneManagerObserver, SBSceneManagerReferenceDelegate> {
    NSMutableDictionary * _displayIdentityToReferenceMap;
    UIApplicationSceneDeactivationManager * _sceneDeactivationManager;
    FBSceneManager * _sceneManager;
    NSMutableSet * _workspaceIdentifiersToIgnore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIApplicationSceneDeactivationManager *sceneDeactivationManager;
@property (readonly) Class superclass;

+ (id)mainDisplaySceneManager;
+ (id)secureMainDisplaySceneManager;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)_newLayoutStateSceneIdentityProviderWithDisplayIdentity:(id)arg1;
- (id)_newSceneIdentityProviderWithDisplayIdentity:(id)arg1;
- (id)_referenceForDisplayIdentity:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_sceneManagerForDisplayIdentity:(id)arg1 creatingIfNecessary:(bool)arg2;
- (void)addActionHandler:(id)arg1 forScene:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)enumerateSceneManagersWithBlock:(id /* block */)arg1;
- (id)init;
- (void)registerSceneWorkspaceIdentifierToIgnore:(id)arg1;
- (void)removeActionHandler:(id)arg1 forScene:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneDeactivationManager;
- (void)sceneManager:(id)arg1 clientDidConnectWithHandshake:(id)arg2;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 fromProcess:(id)arg3 completion:(id /* block */)arg4;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidInvalidateForReference:(id)arg1;
- (id)sceneManagerForDisplayIdentity:(id)arg1;
- (id)sceneManagerForPersistenceIdentifier:(id)arg1;

@end
