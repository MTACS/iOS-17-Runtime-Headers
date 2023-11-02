
@interface SSUDebouncer : NSObject {
    NSObject<OS_dispatch_source> * __delayTimer;
    id /* block */  __handler;
    NSObject<OS_dispatch_queue> * __queue;
    double  __timeWindowSeconds;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *_delayTimer;
@property (nonatomic, copy) id /* block */ _handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) double _timeWindowSeconds;

- (void).cxx_destruct;
- (id)_delayTimer;
- (id /* block */)_handler;
- (id)_queue;
- (double)_timeWindowSeconds;
- (id)initWithCoalescingTimeWindow:(double)arg1 handler:(id /* block */)arg2;
- (void)resetDelayTimer;
- (void)restartDelayTimer:(id)arg1;
- (void)set_delayTimer:(id)arg1;
- (void)set_handler:(id /* block */)arg1;
- (void)signalEventReceived:(id)arg1;

@end
