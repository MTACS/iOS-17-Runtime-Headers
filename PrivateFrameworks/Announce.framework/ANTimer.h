
@interface ANTimer : NSObject {
    NSString * _label;
    NSObject<OS_os_log> * _log;
    double  _timeoutValue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic) double timeoutValue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)timerWithLabel:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (void)_createAndStartTimerWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)_startTimer;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithLabel:(id)arg1 identifier:(id)arg2;
- (id)label;
- (id)log;
- (void)reset;
- (void)setTimeoutValue:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)startWithValue:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (double)timeoutValue;
- (id)timer;

@end
