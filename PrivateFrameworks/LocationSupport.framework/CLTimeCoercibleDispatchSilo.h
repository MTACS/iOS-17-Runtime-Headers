
@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo {
    NSMutableArray * _timerHolders;
}

@property (nonatomic, readonly) NSMutableArray *timerHolders;

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)heartBeat:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)newTimer;
- (void)prepareAndRunBlock:(id /* block */)arg1;
- (void)setLatchedAbsoluteTimestamp:(double)arg1;
- (id)timerHolders;

@end
