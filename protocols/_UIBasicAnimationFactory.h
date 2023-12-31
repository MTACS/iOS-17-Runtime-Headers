
@protocol _UIBasicAnimationFactory <NSObject>

@required

- (CABasicAnimation *)_basicAnimationForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;

@optional

- (bool)_shouldAnimateAdditivelyForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimation;
- (CAMediaTimingFunction *)_timingFunctionForAnimationInView:(UIView *)arg1 withKeyPath:(NSString *)arg2;

@end
