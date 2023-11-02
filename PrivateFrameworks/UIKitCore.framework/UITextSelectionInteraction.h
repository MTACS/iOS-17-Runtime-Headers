
@interface UITextSelectionInteraction : UITextInteraction {
    UITextLoupeSession * _activeLoupeSession;
    _UIKeyboardTextSelectionController * _activeSelectionController;
    UITextGestureTuning * _gestureTuning;
    UITextSelectionGrabberSuppressionAssertion * _grabberSuppressionAssertion;
    long long  _granularityToHandOff;
    bool  _indirectSelectionType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTapLocation;
    double  _lastTapTimestamp;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalCaretRect;
    bool  _viewConformsToTextInput;
    bool  _wasOriginallyFirstResponder;
}

- (void).cxx_destruct;
- (void)_applyTransientState:(id)arg1;
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_createGestureTuningIfNecessary;
- (void)_handleMultiTapGesture:(id)arg1;
- (bool)_hasMarkedTextAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_hasTextAlternativesAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isNowWithinRepeatedTapTime;
- (bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)_isShiftKeyBeingHeldForGesture:(id)arg1;
- (bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;
- (bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1;
- (id)_transientState;
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_usesIndirectSelectionBehavior;
- (bool)_usesPencilSelectionBehaviorForGesture:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)didUpdateSelectionWithGesture:(id)arg1;
- (void)finishSetup;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)handOffGranularity;
- (id)initWithMode:(long long)arg1;
- (id)initWithMode:(long long)arg1 indirect:(bool)arg2;
- (bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 granularity:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 granularity:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 granularity:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)toggleSelectionCommands;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)willUpdateSelectionWithGesture:(id)arg1;

@end
