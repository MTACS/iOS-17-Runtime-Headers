
@protocol _UISceneBSActionSubstituting <NSObject>

@required

- (NSIndexSet *)_UIActionTypesForSubstitution;
- (NSSet *)_substituteActionsForAction:(BSAction *)arg1 forFBSScene:(FBSScene *)arg2 inUIScene:(UIScene *)arg3 fromTransitionContext:(FBSSceneTransitionContext *)arg4;

@end
