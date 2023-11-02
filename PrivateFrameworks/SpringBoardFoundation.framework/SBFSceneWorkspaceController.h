
@interface SBFSceneWorkspaceController : NSObject <BSDescriptionProviding, BSInvalidatable> {
    <SBFSceneWorkspaceControllerDelegate> * _delegate;
    FBSceneWorkspace * _sceneWorkspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFSceneWorkspaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sceneWorkspaceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createSceneForProcessIdentity:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)sceneFromIdentityToken:(id)arg1;
- (id)sceneFromIdentityTokenStringRepresentation:(id)arg1;
- (id)sceneWorkspaceIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
