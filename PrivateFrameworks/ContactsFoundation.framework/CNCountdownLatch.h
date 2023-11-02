
@interface CNCountdownLatch : NSObject {
    unsigned long long  _count;
    NSObject<OS_dispatch_semaphore> * _latchedSemaphore;
    CNUnfairLock * _lock;
}

- (void).cxx_destruct;
- (void)await;
- (bool)awaitImmediate;
- (bool)awaitOnSemaphoreWithTimeout:(double)arg1;
- (bool)awaitWhileSpinningRunloopWithTimeout:(double)arg1;
- (bool)awaitWithTimeout:(double)arg1;
- (bool)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2;
- (void)countDown;
- (id)description;
- (bool)hasLatched;
- (id)init;
- (id)initWithStartingCount:(unsigned long long)arg1;

@end
