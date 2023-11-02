
@protocol _UIPointerInteractionDriver <NSObject>

@required

- (bool)allowsUpdatesWhilePrimaryButtonIsPressed;
- (id)initWithSink:(id <_UIPointerInteractionDriverSink>)arg1;
- (void)invalidate;
- (bool)isActive;
- (struct CAPoint3D { double x1; double x2; double x3; })locationInView:(UIView *)arg1;
- (void)setView:(UIView *)arg1;
- (long long)type;
- (UIView *)view;

@end
