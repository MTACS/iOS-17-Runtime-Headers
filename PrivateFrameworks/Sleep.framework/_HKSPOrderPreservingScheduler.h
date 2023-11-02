
@interface _HKSPOrderPreservingScheduler : NSObject <HKSPScheduler> {
    <HKSPMutexProvider> * _mutexProvider;
    <NAScheduler> * _scheduler;
    bool  _suspended;
    bool  _taskInProgress;
    NSMutableArray * _tasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) <NAScheduler> *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suspended;
@property (nonatomic, readonly) bool taskInProgress;
@property (nonatomic, readonly) NSMutableArray *tasks;

- (void).cxx_destruct;
- (void)_actuallyScheduleTask:(id)arg1;
- (void)_executeTask:(id)arg1;
- (void)_scheduleNextTaskIfPossible;
- (id)_scheduleTask:(id)arg1;
- (void)_taskDidFinish;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)initWithScheduler:(id)arg1 mutexProvider:(id)arg2;
- (id)mutexProvider;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)resume;
- (id)scheduler;
- (void)suspend;
- (bool)suspended;
- (bool)taskInProgress;
- (id)tasks;

@end
