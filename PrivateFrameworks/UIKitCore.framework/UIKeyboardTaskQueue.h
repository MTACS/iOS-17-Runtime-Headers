
@interface UIKeyboardTaskQueue : NSObject {
    NSArray * _activeOriginator;
    NSMutableArray * _deferredTasks;
    bool  _executingOnMainThread;
    UIKeyboardTaskExecutionContext * _executionContext;
    NSConditionLock * _lock;
    UIKeyboardTaskEntry * _mainThreadContinuation;
    NSMutableArray * _tasks;
}

@property (nonatomic, retain) NSArray *activeOriginator;
@property (nonatomic, retain) UIKeyboardTaskExecutionContext *executionContext;

- (void).cxx_destruct;
- (id)activeOriginator;
- (id)addAndReturnTask:(id /* block */)arg1;
- (void)addDeferredTask:(id /* block */)arg1;
- (void)addTask:(id /* block */)arg1;
- (void)continueExecutionOnMainThread;
- (id)executionContext;
- (void)finishExecution;
- (id)init;
- (bool)isEmpty;
- (bool)isMainThreadExecutingTask;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)performSingleTask:(id /* block */)arg1;
- (void)performTask:(id /* block */)arg1;
- (void)performTaskOnMainThread:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)promoteDeferredTaskIfIdle;
- (id)scheduleTask:(id /* block */)arg1 timeInterval:(double)arg2 repeats:(bool)arg3;
- (void)setActiveOriginator:(id)arg1;
- (void)setExecutionContext:(id)arg1;
- (bool)tryLockWhenReadyForMainThread;
- (void)unlock;
- (void)waitUntilAllTasksAreFinished;
- (void)waitUntilTaskIsFinished:(id)arg1;

@end
