
@interface SBPIPSceneContentSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity * _applicationSceneEntity;
}

- (void).cxx_destruct;
- (void)_begin;
- (void)_didComplete;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;

@end
