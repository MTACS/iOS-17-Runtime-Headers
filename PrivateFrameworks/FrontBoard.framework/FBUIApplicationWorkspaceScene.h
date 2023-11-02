
@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet * _allWatchdogs;
    bool  _sentSceneCreate;
    NSMutableArray * _watchdogStack;
}

- (void).cxx_destruct;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_invalidate;
- (id)initWithWorkspace:(id)arg1 host:(id)arg2 settings:(id)arg3 clientSettings:(id)arg4 fromRemnant:(bool)arg5;

@end
