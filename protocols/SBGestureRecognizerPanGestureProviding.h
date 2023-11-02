
@protocol SBGestureRecognizerPanGestureProviding <NSObject>

@required

- (struct CGPoint { double x1; double x2; })locationInView:(UIView *)arg1;
- (struct CGPoint { double x1; double x2; })translationInView:(UIView *)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(UIView *)arg1;

@end
