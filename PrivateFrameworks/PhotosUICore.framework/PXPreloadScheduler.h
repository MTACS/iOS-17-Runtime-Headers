
@interface PXPreloadScheduler : NSObject {
    bool  __isActive;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    PXDisplayLink * _displayLink;
    NSMutableArray * _pendingBlocks;
    NSObject<OS_dispatch_group> * _pendingUtilityTasks;
    struct __CFRunLoopObserver { } * _runloopObserver;
    bool  _shouldIgnoreDisplayLinkTimestamps;
    NSObject<OS_dispatch_queue> * _utilityQueue;
    double  _waitStartTime;
}

@property (setter=_setActive:, nonatomic) bool _isActive;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_didExecuteTaskWithQoS:(unsigned long long)arg1;
- (void)_displayLinkTick:(id)arg1;
- (bool)_isActive;
- (void)_runLoopWillStartWaiting;
- (void)_setActive:(bool)arg1;
- (bool)_shouldExecutePendingBlock;
- (void)_updateIsActive;
- (void)_willScheduleTaskWithQoS:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)scheduleMainQueueTask:(id /* block */)arg1;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)arg1;
- (void)scheduleTaskAfterCATransactionCommits:(id /* block */)arg1;
- (void)scheduleTaskWithQoS:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
