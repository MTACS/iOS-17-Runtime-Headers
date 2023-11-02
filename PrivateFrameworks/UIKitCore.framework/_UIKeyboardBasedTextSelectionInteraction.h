
@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction {
    UITextGestureTuning * _gestureTuning;
}

@property (nonatomic, readonly) UITextGestureTuning *gestureTuning;

- (void).cxx_destruct;
- (void)_createGestureTuningIfNecessary;
- (void)_processGestureForCustomHighlighter:(id)arg1;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (bool)enclosingScrollViewIsScrolling;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureTuning;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (id)owner;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x1; double x2; })arg1 viaDrag:(bool)arg2;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;

@end
