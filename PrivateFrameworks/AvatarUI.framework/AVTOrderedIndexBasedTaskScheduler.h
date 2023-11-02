
@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler> {
    NSMutableDictionary * _readyTasks;
    NSMutableDictionary * _scheduledTasks;
    NSMutableArray * _scheduledTasksOrder;
    NSObject<OS_dispatch_queue> * _stateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *readyTasks;
@property (nonatomic, readonly) NSMutableDictionary *scheduledTasks;
@property (nonatomic, readonly) NSMutableArray *scheduledTasksOrder;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) Class superclass;

+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(id)arg1 order:(id)arg2 readyTasks:(id)arg3 readyRowIndex:(id)arg4;
+ (id)rowBaseIndexForIndex:(id)arg1;

- (void).cxx_destruct;
- (void)cancelAllTasks;
- (void)cancelTask:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)performStateWork:(id /* block */)arg1;
- (id)readyTasks;
- (void)scheduleTask:(id /* block */)arg1 forIndex:(unsigned long long)arg2;
- (id)scheduledTasks;
- (id)scheduledTasksOrder;
- (id)stateLock;
- (void)taskReady:(id /* block */)arg1 forIndex:(unsigned long long)arg2;

@end
