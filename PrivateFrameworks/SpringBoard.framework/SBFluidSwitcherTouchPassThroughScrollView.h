
@interface SBFluidSwitcherTouchPassThroughScrollView : UIScrollView

@property (nonatomic) double velocityScaleFactor;

+ (bool)superclassRespondsToSetVelocityScaleFactor;
+ (bool)superclassRespondsToVelocityScaleFactor;

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setVelocityScaleFactor:(double)arg1;
- (double)velocityScaleFactor;

@end
