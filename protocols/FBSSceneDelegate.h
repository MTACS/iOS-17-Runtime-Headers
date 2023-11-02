
@protocol FBSSceneDelegate <NSObject>

@required

- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(void *)arg1 didUpdateWithDiff:(void *)arg2 transitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FBSScene *, FBSSceneSettingsDiff *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceSceneUpdateResponse *, void*

@end
