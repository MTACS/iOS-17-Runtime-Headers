
@interface TRITaskQueue : NSObject <TRITaskQueueStateProviding, TRITaskQueuing> {
    NSObject<OS_dispatch_queue> * _asyncQueue;
    TRIClient * _client;
    _PASLock * _lock;
    NSObject<OS_dispatch_group> * _opGroup;
    NSObject<OS_dispatch_queue> * _opQueue;
    TRIServerContext * _serverContext;
}

- (void).cxx_destruct;
- (struct { unsigned char x1; })_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 taskId:(id*)arg4 tryRunningEligibleTasksImmediately:(bool)arg5;
- (struct { unsigned char x1; })_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 taskIdOut:(id*)arg4 accumulatedNewTaskRecords:(id)arg5;
- (struct { unsigned char x1; })_addTask:(id)arg1 options:(id)arg2 taskId:(id*)arg3 tryRunningEligibleTasksImmediately:(bool)arg4;
- (id)_addTask:(id)arg1 withDependencies:(id)arg2 guardedData:(id)arg3;
- (bool)_cancelDependenciesAndTaskWithId:(id)arg1 guardedData:(id)arg2;
- (bool)_cancelTask:(id)arg1 guardedData:(id)arg2;
- (bool)_cancelTaskWithId:(id)arg1 guardedData:(id)arg2 persistCancel:(bool)arg3;
- (id)_createOperationWithTask:(id)arg1 withId:(id)arg2 dependencies:(id)arg3 taskMap:(id)arg4 xpcActivities:(id)arg5;
- (id)_earliestStartDateFromTaskList:(id)arg1;
- (void)_evaluateRunConditionsWithGuardedData:(id)arg1 shouldContinueWork:(bool*)arg2;
- (void)_finalizeTask:(id)arg1 withId:(id)arg2 runResult:(id)arg3;
- (bool)_isTaskWithId:(id)arg1 inTaskGroup:(id)arg2 runnableGivenCapabilities:(unsigned long long)arg3 atDate:(id)arg4 cachedRunnability:(id)arg5 visitedPath:(id)arg6 topoSortedRunnable:(id)arg7 allowOnlyRootTasksRunnable:(bool)arg8;
- (void)_partitionTaskGroup:(id)arg1 byRunnabilityGivenCapabilities:(unsigned long long)arg2 runnableAtDate:(id)arg3 topoSortedCurrentlyRunnable:(id*)arg4 blocked:(id*)arg5 allowOnlyRootTasksRunnable:(bool)arg6;
- (void)_registerRetryActivityForDate:(id)arg1;
- (void)_registerTaskQueueActivityForDate:(id)arg1;
- (bool)_removeTaskWithId:(id)arg1 guardedData:(id)arg2 persistRemove:(bool)arg3;
- (id)_runTask:(id)arg1;
- (void)_scheduleFutureActivitiesWithGuardedData:(id)arg1;
- (void)_startImmediateTasksIfNotAlreadyQueued:(id)arg1 guardedData:(id)arg2 didStartNewWork:(bool*)arg3;
- (void)_startRunnableTasksIfNecessaryWithGuardedData:(id)arg1;
- (id)activeActivityDescriptorGrantingCapability:(unsigned long long)arg1;
- (id)activeActivityGrantingCapability:(unsigned long long)arg1;
- (struct { unsigned char x1; })addTask:(id)arg1 options:(id)arg2;
- (struct { unsigned char x1; })addTask:(id)arg1 options:(id)arg2 taskId:(id*)arg3;
- (bool)cancelTask:(id)arg1;
- (bool)cancelTasksWithTag:(id)arg1;
- (bool)cancelTasksWithTag:(id)arg1 excludingTasks:(id)arg2;
- (unsigned long long)count;
- (id)debugDescription;
- (bool)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(id /* block */)arg2;
- (bool)finishXPCActivitiesWithGuardedData:(id)arg1;
- (bool)ifNotPresentAddTask:(id)arg1;
- (id)init;
- (id)initWithServerContext:(id)arg1 operationQueue:(id)arg2 operationGroup:(id)arg3 asyncQueue:(id)arg4;
- (void)registerFinalizeBlock:(id /* block */)arg1;
- (void)registerFinalizeBlockToRetryWithBlock:(id /* block */)arg1;
- (void)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(id /* block */)arg2;
- (bool)updateActivity:(id)arg1 withStartDate:(id)arg2;
- (void)waitForAsyncQueue;

@end
