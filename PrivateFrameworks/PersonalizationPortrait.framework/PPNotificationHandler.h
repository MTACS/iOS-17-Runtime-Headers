
@interface PPNotificationHandler : NSObject {
    _PASLock * _lock;
    NSString * _name;
    double  _waitSeconds;
    NSObject<OS_dispatch_queue> * _waiterQueue;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) double waitSeconds;

- (void).cxx_destruct;
- (void)_delayedExecutionAfterSeconds:(double)arg1;
- (void)_executeBlocksWithGuardedData:(id)arg1;
- (void)addObserverBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (id)description;
- (void)fireWithObjects:(id)arg1;
- (id)initWithName:(id)arg1 waitSeconds:(double)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setWaitSeconds:(double)arg1;
- (void)waitOnQueueToDrain;
- (double)waitSeconds;

@end
