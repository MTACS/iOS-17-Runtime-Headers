
@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {
    bool  _hasSufficientForce;
    double  _startTime;
}

- (void)reset;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
