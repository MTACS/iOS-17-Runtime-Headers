
@interface PUTouchingGestureRecognizer : UIGestureRecognizer {
    unsigned long long  __touchCount;
}

@property (setter=_setTouchCount:, nonatomic) unsigned long long _touchCount;

- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_setTouchCount:(unsigned long long)arg1;
- (unsigned long long)_touchCount;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
