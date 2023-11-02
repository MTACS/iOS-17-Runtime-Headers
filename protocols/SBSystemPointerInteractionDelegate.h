
@protocol SBSystemPointerInteractionDelegate <NSObject>

@required

- (bool)shouldBeginPointerInteractionRequest:(UIPointerRegionRequest *)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forView:(UIView *)arg3;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pointerInteractionHitTestInsetsForView:(UIView *)arg1;
- (void)pointerWillExitRegion;
- (UIPointerRegion *)regionAtLocation:(struct CGPoint { double x1; double x2; })arg1 forView:(UIView *)arg2;
- (UIPointerStyle *)styleForRegion:(UIPointerRegion *)arg1 forView:(UIView *)arg2;

@end
