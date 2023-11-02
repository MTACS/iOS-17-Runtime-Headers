
@protocol _SBSystemApertureProximityTouchHandlingViewDelegate <NSObject>

@required

- (bool)proximityBacklightPolicyTouchHandlingView:(_SBSystemApertureProximityTouchHandlingView *)arg1 shouldConsumeTouchForHitTest:(struct CGPoint { double x1; double x2; })arg2 withEvent:(UIEvent *)arg3;

@end
