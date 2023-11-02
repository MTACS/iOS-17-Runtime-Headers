
@interface TRITaskQueueGuardedData : NSObject {
    NSMutableArray * _finalizeBlocks;
    unsigned long long  currentCapabilities;
    NSDate * nextScheduledTaskStartTime;
    NSMutableDictionary * queuedTasks;
    bool  stopRequested;
    id /* block */  taskQueueCompletionBlock;
    <TRITaskPersisting> * taskStore;
    NSMutableDictionary * xpcDescriptorToState;
}

- (void).cxx_destruct;

@end
