
@protocol FBSceneDelegate <FBSceneObserver>

@optional

- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 willUpdateSettings:(FBSMutableSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneDidDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;

@end
