
@protocol FBSceneComponent <FBSSceneComponent, FBSceneObserver>

@optional

- (void)configureInitialSettings:(FBSMutableSceneSettings *)arg1;
- (void)scene:(FBScene *)arg1 willUpdateSettings:(FBSMutableSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3;

@end
