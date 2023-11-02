
@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource, FBSceneClient, FBSceneClientProvider, FBSceneClientProviderInternal> {
    FBSSerialQueue * _callOutQueue;
    NSMutableDictionary * _hostsByIdentity;
    NSMutableSet * _invalidationActions;
    NSMutableDictionary * _localSceneInfoByIdentity;
    NSMutableArray * _pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    bool  _workspaceInitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (bool)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2;
- (id)callOutQueue;
- (bool)canHaveAgent;
- (id)fbsSceneForScene:(id)arg1;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)hostProcess;
- (id)identifier;
- (id)init;
- (id)registerHost:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 fromRemnant:(id)arg4 error:(out id*)arg5;
- (void)registerInvalidationAction:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (id)sceneWithIdentity:(id)arg1;
- (id)scenes;
- (void)unregisterHost:(id)arg1;

@end
