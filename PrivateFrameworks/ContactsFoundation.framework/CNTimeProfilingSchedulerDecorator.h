
@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler> {
    unsigned long long  _blockCounter;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, readonly) unsigned long long blockCounter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)os_log;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (unsigned long long)blockCounter;
- (id)description;
- (id)initWithScheduler:(id)arg1;
- (unsigned long long)nextBlockNumber;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)scheduler;
- (double)timestamp;

@end
