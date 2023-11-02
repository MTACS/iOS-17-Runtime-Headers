
@interface UITextPhraseBoundaryInteraction : UITextInteraction {
    <UITextCursorAssertion> * _blinkAssertion;
    UITextGestureTuning * _gestureTuning;
}

- (void).cxx_destruct;
- (void)_createGestureTuningIfNecessary;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_phraseBoundaryGestureRecognizer;
- (void)didMoveToView:(id)arg1;
- (id)initWithTextInput:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointIfPlacedCarefully:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })touchAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateVisibilityOffsetForGesture:(id)arg1;

@end
