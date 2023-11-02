
@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    bool  _recognizesOnSubsequentTouchDowns;
    long long  _requiredButtonMask;
    bool  _sendTapAction;
    SEL  _tapAction;
    unsigned long long  _tapCount;
    UITapRecognizer * _tapRecognizer;
    id  _target;
    unsigned long long  _touchDownCount;
}

@property double allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGPoint { double x1; double x2; } location;
@property double maximumIntervalBetweenTaps;
@property double maximumTouchDownDuration;
@property unsigned long long minimumNumberOfTapsRequired;
@property unsigned long long numberOfTouchesRequired;
@property bool recognizesOnSubsequentTouchDowns;
@property long long requiredButtonMask;
@property (readonly) Class superclass;
@property (readonly) unsigned long long tapCount;
@property (readonly) NSArray *touchesForTap;

- (void).cxx_destruct;
- (bool)_allowsEventWithRequiredButtonMask:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (double)_touchSloppinessFactor;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 tapAction:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)maximumIntervalBetweenTaps;
- (double)maximumTouchDownDuration;
- (unsigned long long)minimumNumberOfTapsRequired;
- (unsigned long long)numberOfTouchesRequired;
- (void)onStateUpdate:(id)arg1;
- (bool)recognizesOnSubsequentTouchDowns;
- (long long)requiredButtonMask;
- (void)reset;
- (void)resetTapCountForTapRecognizer:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setMaximumIntervalBetweenTaps:(double)arg1;
- (void)setMaximumTouchDownDuration:(double)arg1;
- (void)setMinimumNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setRecognizesOnSubsequentTouchDowns:(bool)arg1;
- (void)setRequiredButtonMask:(long long)arg1;
- (unsigned long long)tapCount;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)touchesForTap;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
