
@interface CAMPreciseTimer : NSObject {
    NSObject<OS_dispatch_source> * __currentTimer;
    id /* block */  __handler;
    double  _delay;
    bool  _fired;
    double  _interval;
}

@property (setter=_setCurrentTimer:, nonatomic, retain) NSObject<OS_dispatch_source> *_currentTimer;
@property (nonatomic, readonly, copy) id /* block */ _handler;
@property (nonatomic, readonly) double delay;
@property (setter=_setFired:, nonatomic) bool fired;
@property (nonatomic, readonly) double interval;

- (void).cxx_destruct;
- (id)_currentTimer;
- (id /* block */)_handler;
- (void)_setCurrentTimer:(id)arg1;
- (void)_setFired:(bool)arg1;
- (double)delay;
- (bool)fired;
- (id)init;
- (id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(id /* block */)arg3;
- (double)interval;
- (void)invalidate;
- (void)start;

@end
