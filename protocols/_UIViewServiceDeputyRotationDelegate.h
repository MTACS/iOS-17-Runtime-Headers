
@protocol _UIViewServiceDeputyRotationDelegate <NSObject>

@required

- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(_UIHostedWindow *)arg1 disableAutomaticBehaviors:(bool)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
