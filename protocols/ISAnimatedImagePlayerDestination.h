
@protocol ISAnimatedImagePlayerDestination <NSObject>

@required

- (void)animatedImagePlayerFrameDidChange:(ISAnimatedImagePlayer *)arg1;
- (bool)animatedImagePlayerIsReadyToDisplay:(ISAnimatedImagePlayer *)arg1;

@optional

- (void)animatedImagePlayerDidBeginAnimating:(ISAnimatedImagePlayer *)arg1;
- (void)animatedImagePlayerDidEndAnimating:(ISAnimatedImagePlayer *)arg1;

@end
