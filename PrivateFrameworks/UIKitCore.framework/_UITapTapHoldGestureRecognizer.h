
@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer {
    int  _currentNumberOfPresses;
    long long  _gestureType;
    bool  _isInHoldToAction;
    bool  _isWaitingForHoldToAction;
    bool  _isWaitingForTooSlowForDoubleTap;
    double  _pressEventBeginTimestamp;
    double  _startTime;
}

@property (nonatomic) int currentNumberOfPresses;
@property (nonatomic) long long gestureType;
@property (nonatomic) bool isInHoldToAction;
@property (nonatomic) bool isWaitingForHoldToAction;
@property (nonatomic) bool isWaitingForTooSlowForDoubleTap;
@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) double startTime;

- (bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (void)cancelPendingHoldToAction;
- (void)cancelPendingTooSlowForDoubleTap;
- (int)currentNumberOfPresses;
- (long long)gestureType;
- (void)holdToAction:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isInHoldToAction;
- (bool)isWaitingForHoldToAction;
- (bool)isWaitingForTooSlowForDoubleTap;
- (double)pressEventBeginTimestamp;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)scheduleHoldToAction;
- (void)scheduleTooSlowForDoubleTap;
- (void)setCurrentNumberOfPresses:(int)arg1;
- (void)setGestureType:(long long)arg1;
- (void)setIsInHoldToAction:(bool)arg1;
- (void)setIsWaitingForHoldToAction:(bool)arg1;
- (void)setIsWaitingForTooSlowForDoubleTap:(bool)arg1;
- (void)setPressEventBeginTimestamp:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)tooSlowForDoubleTap:(id)arg1;

@end
