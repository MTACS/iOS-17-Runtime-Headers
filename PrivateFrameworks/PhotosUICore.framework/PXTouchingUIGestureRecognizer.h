
@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer {
    unsigned long long  __beginRequestID;
    bool  __didBegin;
    struct CGPoint { 
        double x; 
        double y; 
    }  __initialPointInView;
    unsigned long long  __touchCount;
    bool  __willBegin;
    double  _maximumTouchMovement;
    double  _minimumTouchDuration;
    <PXTouchingUIGestureRecognizerDelegate> * _touchDelegate;
}

@property (setter=_setBeginRequestID:, nonatomic) unsigned long long _beginRequestID;
@property (setter=_setDidBegin:, nonatomic) bool _didBegin;
@property (setter=_setInitialPointInView:, nonatomic) struct CGPoint { double x1; double x2; } _initialPointInView;
@property (setter=_setTouchCount:, nonatomic) unsigned long long _touchCount;
@property (setter=_setWillBegin:, nonatomic) bool _willBegin;
@property (nonatomic) double maximumTouchMovement;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) <PXTouchingUIGestureRecognizerDelegate> *touchDelegate;

- (void).cxx_destruct;
- (unsigned long long)_beginRequestID;
- (void)_beginWithRequestID:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (bool)_didBegin;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_initialPointInView;
- (void)_setBeginRequestID:(unsigned long long)arg1;
- (void)_setDidBegin:(bool)arg1;
- (void)_setInitialPointInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTouchCount:(unsigned long long)arg1;
- (void)_setWillBegin:(bool)arg1;
- (unsigned long long)_touchCount;
- (bool)_willBegin;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })initialLocationInView:(id)arg1;
- (double)maximumTouchMovement;
- (double)minimumTouchDuration;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (void)setMaximumTouchMovement:(double)arg1;
- (void)setMinimumTouchDuration:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchDelegate:(id)arg1;
- (id)touchDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
