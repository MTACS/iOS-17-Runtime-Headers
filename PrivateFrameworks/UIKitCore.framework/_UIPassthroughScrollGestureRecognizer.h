
@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _accumulatedScrollEventDelta;
    bool  _endForPrimaryButtonDown;
    bool  _endForSecondaryButtonDown;
    unsigned long long  _endReason;
    struct { 
        unsigned int commandHeldThroughAllTouchPhases : 1; 
    }  _flags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPassthroughGestureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endForPrimaryButtonDown;
@property (nonatomic) bool endForSecondaryButtonDown;
@property (nonatomic, readonly) unsigned long long endReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_supportsTouchContinuation;
+ (bool)canHandleEventForPassthrough:(id)arg1;

- (void)_beginAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_endWithReason:(unsigned long long)arg1;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_transformChangedWithEvent:(id)arg1;
- (id)_window;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)endForPrimaryButtonDown;
- (bool)endForSecondaryButtonDown;
- (unsigned long long)endReason;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setEndForPrimaryButtonDown:(bool)arg1;
- (void)setEndForSecondaryButtonDown:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
