
@protocol CAAnimationDelegate <NSObject>

@optional

- (void)animationDidStart:(CAAnimation *)arg1;
- (void)animationDidStop:(CAAnimation *)arg1 finished:(bool)arg2;

@end
