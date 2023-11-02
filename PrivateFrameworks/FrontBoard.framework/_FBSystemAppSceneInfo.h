
@interface _FBSystemAppSceneInfo : NSObject {
    FBSScene * _FBSScene;
    bool  _hasSentFBSWorkspaceDelegateSceneCreate;
    FBSSceneTransitionContext * _pendingTransitionContext;
}

@property (nonatomic, retain) FBSScene *FBSScene;
@property (nonatomic) bool hasSentFBSWorkspaceDelegateSceneCreate;
@property (nonatomic, retain) FBSSceneTransitionContext *pendingTransitionContext;

- (void).cxx_destruct;
- (id)FBSScene;
- (bool)hasSentFBSWorkspaceDelegateSceneCreate;
- (id)pendingTransitionContext;
- (void)setFBSScene:(id)arg1;
- (void)setHasSentFBSWorkspaceDelegateSceneCreate:(bool)arg1;
- (void)setPendingTransitionContext:(id)arg1;

@end
