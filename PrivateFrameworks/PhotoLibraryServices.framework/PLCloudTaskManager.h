
@interface PLCloudTaskManager : NSObject {
    NSMutableDictionary * _highPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableDictionary * _lowPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary * _pendingTaskForTaskIdentifier;
}

- (void).cxx_destruct;
- (void)_removeTaskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(bool)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResourceIdentifier:(id)arg2 highPriority:(bool)arg3;
- (id)_taskForResourceIdentifier:(id)arg1 highPriority:(bool)arg2;
- (id)_taskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(bool)arg2;
- (bool)addProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forResourceIdentifier:(id)arg3 highPriority:(bool)arg4 withTaskIdentifier:(id)arg5;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (id)init;
- (void)reportCompletionForResourceIdentifier:(id)arg1 highPriority:(bool)arg2 withError:(id)arg3;
- (void)reportProgress:(float)arg1 forResourceIdentifier:(id)arg2 highPriority:(bool)arg3;
- (void)reset;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;

@end
