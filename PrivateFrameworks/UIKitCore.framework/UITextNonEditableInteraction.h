
@interface UITextNonEditableInteraction : UITextInteraction {
    long long  _mode;
}

- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint { double x1; double x2; })arg1 textInput:(id)arg2 canReplaceText:(bool)arg3;
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint { double x1; double x2; })arg1 textInput:(id)arg2 canReplaceText:(bool)arg3 modifierFlags:(long long)arg4;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4 forTouchType:(long long)arg5;
- (bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (bool)_shouldAllowOneFingerTapInUneditable:(id)arg1;
- (void)doubleTapInUneditable:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (void)oneFingerTapInUneditableAccelerated:(id)arg1;
- (void)toggleSelectionCommands;

@end
