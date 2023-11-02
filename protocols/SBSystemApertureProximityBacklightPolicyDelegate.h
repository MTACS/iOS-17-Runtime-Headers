
@protocol SBSystemApertureProximityBacklightPolicyDelegate <NSObject>

@required

- (void)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 embedProximityTouchTrackingView:(UIView *)arg2 touchBlockingView:(UIView *)arg3;
- (bool)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 isSystemApertureElementVisibleAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)systemApertureProximityBacklightPolicy:(SBSystemApertureProximityBacklightPolicy *)arg1 removeProximityTouchTrackingView:(UIView *)arg2 touchBlockingView:(UIView *)arg3;
- (bool)systemApertureProximityBacklightPolicyShouldConsiderSystemApertureInert:(SBSystemApertureProximityBacklightPolicy *)arg1;
- (bool)systemApertureProximityBacklightPolicyShouldDisableGracePeriod:(SBSystemApertureProximityBacklightPolicy *)arg1;

@end
