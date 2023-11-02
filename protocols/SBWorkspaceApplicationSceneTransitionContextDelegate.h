
@protocol SBWorkspaceApplicationSceneTransitionContextDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 frameForApplicationSceneEntity:(SBWorkspaceEntity *)arg2;
- (SBLayoutState *)layoutStateForApplicationTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1;
- (SBLayoutState *)previousLayoutStateForApplicationTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1;

@end
