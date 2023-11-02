
@interface WFTimer : NSObject {
    double  _duration;
    <WFTimerHandler> * _handler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) <WFTimerHandler> *handler;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *timerQueue;

- (void).cxx_destruct;
- (void)cancel;
- (double)duration;
- (id)handler;
- (id)initWithHandler:(id)arg1 duration:(double)arg2;
- (void)restart;
- (void)setTimeoutTimer:(id)arg1;
- (void)setTimerQueue:(id)arg1;
- (bool)shouldHaveTimeout;
- (void)start;
- (id)timeoutTimer;
- (id)timerQueue;

@end
