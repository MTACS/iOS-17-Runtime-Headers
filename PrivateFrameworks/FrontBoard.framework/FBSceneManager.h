
@interface FBSceneManager : NSObject <SBApplicationSupportServiceRequestSceneIdentityTokenProvider> {
    FBSceneWorkspace * _workspace;
}

@property (setter=_setSuppressConnectionHandshakes:, nonatomic) bool _suppressConnectionHandshakes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_clearKeyboardScene;
+ (id)keyboardScene;
+ (id)observeKeyboardSceneAvailability:(id /* block */)arg1;
+ (void)setKeyboardScene:(id)arg1;
+ (id)sharedInstance;
+ (void)synchronizeChanges:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_createSceneWithDefinition:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 transitionContext:(id)arg4 fromRemnant:(id)arg5 usingClientProvider:(id)arg6 completion:(id /* block */)arg7;
- (bool)_isSynchronizingSceneUpdates;
- (void)_setSuppressConnectionHandshakes:(bool)arg1;
- (bool)_suppressConnectionHandshakes;
- (void)addObserver:(id)arg1;
- (id)createLegacySceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3;
- (id)createSceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3;
- (id)createSceneWithDefinition:(id)arg1;
- (id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2;
- (id)createSceneWithIdentifier:(id)arg1 parameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4;
- (id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)newSceneIdentityTokenForIdentity:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sceneFromIdentityToken:(id)arg1;
- (id)sceneFromIdentityTokenStringRepresentation:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenesPassingTest:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
