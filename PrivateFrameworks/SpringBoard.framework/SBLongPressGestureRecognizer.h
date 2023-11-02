
@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {
    bool  _firstEventAfterClicksWasReceived;
    double  _minimumPressDuration;
}

@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned long long numberOfClicksRequired;

- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)minimumPressDuration;
- (void)reset;
- (void)setMinimumPressDuration:(double)arg1;

@end
