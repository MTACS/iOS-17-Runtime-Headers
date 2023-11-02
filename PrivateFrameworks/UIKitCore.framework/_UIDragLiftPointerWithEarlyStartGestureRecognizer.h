
@interface _UIDragLiftPointerWithEarlyStartGestureRecognizer : _UIDragLiftPointerGestureRecognizer {
    double  _liftMoveHysteresis;
}

@property (nonatomic) double liftMoveHysteresis;

- (double)liftMoveHysteresis;
- (void)setLiftMoveHysteresis:(double)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
