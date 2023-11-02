
@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {
    bool  _delayForceMagnify;
    bool  _didLongForcePress;
}

@property (nonatomic) bool delayForceMagnify;
@property (nonatomic) bool didLongForcePress;

+ (id)sharedInstance;

- (void)_cleanupDeadGesturesIfNecessary;
- (bool)allowOneFingerDeepPress;
- (bool)delayForceMagnify;
- (bool)didLongForcePress;
- (double)oneFingerForcePressMinimumDuration;
- (bool)oneFingerForcePressShouldCancelTouchesInView;
- (bool)oneFingerForcePressShouldFailWithoutForce;
- (void)setDelayForceMagnify:(bool)arg1;
- (void)setDidLongForcePress:(bool)arg1;
- (Class)textInteractionClass;

@end
