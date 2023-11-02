
@interface SPUISearchViewSceneTransitionContext : UIApplicationSceneTransitionContext

@property (nonatomic) bool shouldBackground;
@property (nonatomic) bool shouldDismiss;

- (void)setShouldBackground:(bool)arg1;
- (void)setShouldDismiss:(bool)arg1;
- (bool)shouldBackground;
- (bool)shouldDismiss;

@end
