
@interface PSPointerSystemClientController : NSObject <FBSceneDelegate, FBSceneWorkspaceDelegate> {
    <PSPointerSystemClientControllerDelegate> * _delegate;
    RBSProcessIdentity * _pointerUIDProcessIdentity;
    FBSceneWorkspace * _sceneWorkspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPointerSystemClientControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateSceneForIdentifierPrefix:(id)arg1 displayConfiguration:(id)arg2;
- (void)_prepareSceneForIdentifierPrefix:(id)arg1 displayConfiguration:(id)arg2;
- (id)_sceneIdentifierForIdentifierPrefix:(id)arg1 displayConfiguration:(id)arg2;
- (id)delegate;
- (id)init;
- (void)invalidateScenesForPointerForDisplayConfiguration:(id)arg1;
- (void)prepareScenesForPointerForDisplayConfiguration:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)workspace:(id)arg1 clientDidConnectWithHandshake:(id)arg2;
- (void)workspace:(id)arg1 didAddScene:(id)arg2;
- (void)workspace:(id)arg1 willRemoveScene:(id)arg2;

@end
