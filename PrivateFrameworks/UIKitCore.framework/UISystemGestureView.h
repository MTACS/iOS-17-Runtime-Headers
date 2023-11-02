
@interface UISystemGestureView : UIView

- (bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;

@end
