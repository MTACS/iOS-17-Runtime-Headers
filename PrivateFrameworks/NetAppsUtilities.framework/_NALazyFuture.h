
@interface _NALazyFuture : NAFuture {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _block;
    <NAScheduler> * _scheduler;
    bool  _started;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) <NAScheduler> *scheduler;
@property (nonatomic) bool started;

- (void).cxx_destruct;
- (id)accessQueue;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (id)scheduler;
- (void)setAccessQueue:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setScheduler:(id)arg1;
- (void)setStarted:(bool)arg1;
- (bool)started;
- (void)willAddCompletionBlock;

@end
