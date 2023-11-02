
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
    NSMutableSet * _activeTouches;
    double  _allowableMovement;
    int  _currentNumberOfTaps;
    double  _minimumFinalPressDuration;
    int  _numberOfFullTaps;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    UIDelayedAction * _tapTimer;
    UITouch * _touch;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationOfFirstTap;
@property (nonatomic) double minimumFinalPressDuration;
@property (nonatomic) int numberOfFullTaps;
@property (nonatomic, retain) UITouch *touch;

- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (void)_verifyMovementInAllowableRange;
- (double)allowableMovement;
- (void)clearTapTimer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationOfFirstTap;
- (double)minimumFinalPressDuration;
- (int)numberOfFullTaps;
- (void)recognized:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setMinimumFinalPressDuration:(double)arg1;
- (void)setNumberOfFullTaps:(int)arg1;
- (void)setTouch:(id)arg1;
- (void)startRecognitionTimer:(double)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touch;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInWindowCoordinates;

@end
