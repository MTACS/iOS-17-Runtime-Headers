
@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity * _applicationSceneEntity;
    id /* block */  _postSceneUpdateHandler;
}

@property (nonatomic, copy) id /* block */ postSceneUpdateHandler;

- (void).cxx_destruct;
- (void)_begin;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;
- (id /* block */)postSceneUpdateHandler;
- (void)setPostSceneUpdateHandler:(id /* block */)arg1;

@end
