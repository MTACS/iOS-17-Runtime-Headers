
@interface UIHeldAction : UIDelayedAction {
    double  _baseDelay;
    NSDate * _holdBegan;
    bool  _holding;
    double  _timeBalance;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)hold;
- (bool)isHolding;
- (void)resume;
- (void)touchWithDelay:(double)arg1;
- (void)unschedule;

@end
