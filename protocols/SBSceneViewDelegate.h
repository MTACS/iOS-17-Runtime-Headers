
@protocol SBSceneViewDelegate <NSObject>

@optional

- (BSUIAnimationFactory *)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(BSUIAnimationFactory *)arg3;
- (void)sceneView:(SBSceneView *)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;

@end
