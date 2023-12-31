
@interface REOpportunisticTrainingScheduler : RETrainingScheduler {
    NSMutableArray * _blocks;
    NSObject<OS_xpc_object> * _criteria;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _scheduled;
}

- (void).cxx_destruct;
- (void)_performAllTasks;
- (void)_queue_unschedule;
- (void)cancelPendindTasks;
- (void)dealloc;
- (id)init;
- (void)performTask:(id /* block */)arg1;

@end
