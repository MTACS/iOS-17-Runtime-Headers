
@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> * _exclusiveMomentsQueue;
    NSObject<OS_dispatch_queue> * _highQOSAssetIngestQueue;
    NSObject<OS_dispatch_queue> * _sharedBackgroundQueue;
    NSObject<OS_dispatch_queue> * _sharedUtilityQueue;
    NSObject<OS_dispatch_workloop> * _sharedWorkloop;
    NSObject<OS_dispatch_queue> * _userInitiatedQueueA;
}

+ (void)configureListTrackingForDispatchQueue:(id)arg1;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)arg1;
+ (bool)isRunningUnderLimiter;
+ (void)reportBlockDequeuedOnQueue:(id)arg1;
+ (void)reportBlockEnqueued:(id /* block */)arg1 onQueue:(id)arg2 forLibrary:(id)arg3;
+ (id)sharedLimiter;

- (void).cxx_destruct;
- (void)_async:(id /* block */)arg1 identifyingBlock:(id /* block */)arg2 libraryRole:(unsigned long long)arg3 libraryForTelemetry:(id)arg4;
- (int (*)_callOutForQoS:(unsigned int)arg1 fromQueue:(id)arg2;
- (void)_handleUnexpectedQoSClass:(unsigned int)arg1;
- (id)_nextQueueForQoS:(unsigned int)arg1 libraryRole:(unsigned long long)arg2;
- (id)_queuesTrackingBlocks;
- (void)_sync:(id /* block */)arg1 identifyingBlock:(id /* block */)arg2 libraryRole:(unsigned long long)arg3 libraryForTelemetry:(id)arg4;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)arg1;
- (void)async:(id /* block */)arg1 identifyingBlock:(id /* block */)arg2 library:(id)arg3;
- (void)asyncPerformOnContext:(id)arg1 identifyingBlock:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)debugDescription;
- (void)dispatchAsync:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (long long)maxConcurrency;
- (id)sharedBackgroundQueue;
- (id)sharedUtilityQueue;
- (void)sync:(id /* block */)arg1 identifyingBlock:(id /* block */)arg2 library:(id)arg3;

@end
