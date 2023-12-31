
@protocol FBSWorkspaceDelegate <NSObject>

@optional

- (void)workspace:(void *)arg1 didCreateScene:(void *)arg2 withTransitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FBSWorkspace *, FBSScene *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceCreateSceneResponse *, void*
- (void)workspace:(FBSWorkspace *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)workspace:(void *)arg1 willDestroyScene:(void *)arg2 withTransitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FBSWorkspace *, FBSScene *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceDestroySceneResponse *, void*

@end
