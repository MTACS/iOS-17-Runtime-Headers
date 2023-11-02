
@interface CNBlockCountingSchedulerDecorator : NSObject <CNScheduler> {
    unsigned long long  _activeBlockCount;
    unsigned long long  _completedBlockCount;
    unsigned long long  _pendingBlockCount;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, readonly) unsigned long long activeBlockCount;
@property (nonatomic, readonly) unsigned long long completedBlockCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pendingBlockCount;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)os_log;

- (void).cxx_destruct;
- (unsigned long long)activeBlockCount;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (void)blockBecameActive;
- (void)blockBecameCompleted;
- (void)blockBecamePending;
- (unsigned long long)completedBlockCount;
- (id)description;
- (id)initWithScheduler:(id)arg1;
- (unsigned long long)pendingBlockCount;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)scheduler;
- (double)timestamp;

@end
