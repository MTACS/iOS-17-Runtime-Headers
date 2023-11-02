
@interface CATDispatchTimer : NSObject <CATResettableTimer> {
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    unsigned long long  mFireCount;
    id /* block */  mFireHandler;
    bool  mFiresForever;
    NSString * mIdentifier;
    double  mTimeInterval;
    NSObject<OS_dispatch_source> * mTimerSource;
    unsigned long long  mTotalFires;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

+ (id)scheduledTimerWithIdentifier:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 timeInterval:(double)arg4 totalFires:(unsigned long long)arg5 firesForever:(bool)arg6 fireHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 timeInterval:(double)arg4 totalFires:(unsigned long long)arg5 firesForever:(bool)arg6 fireHandler:(id /* block */)arg7;
- (void)invalidate;
- (void)reset;
- (void)resume;
- (void)timerDidFire;

@end
