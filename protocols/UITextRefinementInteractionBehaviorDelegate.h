
@protocol UITextRefinementInteractionBehaviorDelegate <NSObject>

@required

- (void)adjustVariableDelaySettingsForLoupeInteraction:(UITextRefinementInteraction *)arg1;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(UITextRefinementInteraction *)arg1;
- (void)configureLoupeGestureRecognizer:(UIGestureRecognizer *)arg1 forTextLoupeInteraction:(UITextRefinementInteraction *)arg2;
- (Class)gestureRecognizerClassForLoupeInteraction:(UITextRefinementInteraction *)arg1;
- (bool)loupeGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1 forTextLoupeInteraction:(UITextRefinementInteraction *)arg2;
- (bool)shouldAllowEnforcedTouchTypeForTouch:(UITouch *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;
- (struct CGPoint { double x1; double x2; })startPointForLoupeGesture:(UIGestureRecognizer *)arg1;
- (void)textLoupeInteraction:(void *)arg1 gestureChangedWithState:(void *)arg2 location:(void *)arg3 translation:(void *)arg4 velocity:(void *)arg5 modifierFlags:(void *)arg6 shouldCancel:(void *)arg7; // needs 7 arg types, found 19: UITextRefinementInteraction *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, struct CGPoint { double x1; double x2; }, id /* block */, void*, id /* block */, void*, struct CGPoint { double x1; double x2; }, id /* block */, void*, id /* block */, void*, struct CGPoint { double x1; double x2; }, id /* block */, void*, long long, bool*
- (struct CGPoint { double x1; double x2; })translationInView:(UIView *)arg1 forLoupeGesture:(UIGestureRecognizer *)arg2;
- (bool)triggeredByLongPressGesture:(UIGestureRecognizer *)arg1;
- (bool)usesTouchAlignment;
- (struct CGPoint { double x1; double x2; })velocityInView:(UIView *)arg1 forLoupeGesture:(UIGestureRecognizer *)arg2;

@end
