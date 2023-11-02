
@interface SBPIPPinchGestureRecognizer : UIPinchGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedMovement;
    bool  _achievedMaximumAbsoluteAccumulatedMovement;
    bool  _failsPastHysteresis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maximumAbsoluteAccumulatedMovement;
    unsigned long long  _maximumNumberOfTouches;
    NSMutableSet * _touches;
}

@property (nonatomic) <SBPIPSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) bool failsPastHysteresis;
@property (nonatomic) unsigned long long maximumNumberOfTouches;

- (void).cxx_destruct;
- (id)delegate;
- (bool)failsPastHysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)maximumNumberOfTouches;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setFailsPastHysteresis:(bool)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
