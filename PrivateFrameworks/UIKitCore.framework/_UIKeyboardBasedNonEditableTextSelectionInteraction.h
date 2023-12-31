
@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : _UIKeyboardBasedTextSelectionInteraction {
    bool  _isShiftKeyBeingHeld;
}

- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(bool)arg3;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x1; double x2; })arg1 viaDrag:(bool)arg2;

@end
