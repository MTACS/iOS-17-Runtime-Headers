
@interface FPPacer : NSObject {
    id /* block */  _eventBlock;
    id /* block */  _explicitFireBlock;
    double  _lastFireTime;
    double  _minFireInterval;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    _Atomic int  _sourceSuspendCount;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ eventBlock;
@property (copy) id /* block */ explicitFireBlock;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void).cxx_destruct;
- (double)_computeNextTime;
- (void)_fire;
- (void)_scheduleNextFire;
- (void)dealloc;
- (id /* block */)eventBlock;
- (id /* block */)explicitFireBlock;
- (id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3;
- (bool)isSuspended;
- (void)resume;
- (void)setEventBlock:(id /* block */)arg1;
- (void)setExplicitFireBlock:(id /* block */)arg1;
- (void)signal;
- (void)signalWithTransferredQoSIfImmediate;
- (void)suspend;

@end
