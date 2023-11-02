
@interface UITextRefinementCursorBehavior : NSObject <UITextRefinementInteractionBehaviorDelegate> {
    _UIKeyboardTextSelectionController * _activeSelectionController;
    id  _grabberHandleSuppressionAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;
- (bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;
- (bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (struct CGPoint { double x1; double x2; })startPointForLoupeGesture:(id)arg1;
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(id /* block */)arg3 translation:(id /* block */)arg4 velocity:(id /* block */)arg5 modifierFlags:(long long)arg6 shouldCancel:(bool*)arg7;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1 forLoupeGesture:(id)arg2;
- (bool)triggeredByLongPressGesture:(id)arg1;
- (bool)usesTouchAlignment;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1 forLoupeGesture:(id)arg2;

@end
