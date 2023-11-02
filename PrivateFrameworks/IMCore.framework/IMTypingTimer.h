
@interface IMTypingTimer : NSObject {
    NSDate * _beginDate;
    <IMTypingTimerDelegate> * _delegate;
    IMHandle * _handle;
    double  _timeoutInterval;
    NSTimer * _timer;
}

@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic) <IMTypingTimerDelegate> *delegate;
@property (nonatomic, readonly, copy) IMHandle *handle;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, retain) NSTimer *timer;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)shouldAdjustTimeoutIntervalForBeginDate;

- (void).cxx_destruct;
- (id)beginDate;
- (id)delegate;
- (id)handle;
- (id)initWithHandle:(id)arg1 beginDate:(id)arg2 timeoutInterval:(double)arg3 delegate:(id)arg4;
- (void)invalidate;
- (bool)isValid;
- (void)setDelegate:(id)arg1;
- (void)setTimer:(id)arg1;
- (double)timeoutInterval;
- (id)timer;
- (void)timerCallback;
- (void)triggerTimeout;

@end
