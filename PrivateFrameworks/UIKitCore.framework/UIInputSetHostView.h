
@interface UIInputSetHostView : UIView

+ (bool)_notifyOnExplicitLayout;
+ (bool)_shouldHitTestInputViewFirst;
+ (bool)requiresConstraintBasedLayout;

- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (void)_updateSafeAreaInsets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;

@end
