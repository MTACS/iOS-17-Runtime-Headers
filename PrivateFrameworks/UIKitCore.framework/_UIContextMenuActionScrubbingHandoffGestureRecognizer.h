
@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer {
    double  _hysteresis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
}

@property (nonatomic) double hysteresis;

+ (bool)_supportsTouchContinuation;

- (void)_beginGestureIfPossible;
- (bool)_gestureIsStillValid;
- (bool)_satisfiedHysteresis;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (double)hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setHysteresis:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
