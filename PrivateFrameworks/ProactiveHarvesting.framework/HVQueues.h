
@interface HVQueues : NSObject {
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _notificationSerialQueue;
}

+ (id)defaultQueues;

- (void).cxx_destruct;
- (bool)cleanupWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
- (bool)deleteContentWithRequest:(id)arg1 error:(id*)arg2;
- (bool)dequeueContent:(id*)arg1 contentProtection:(id*)arg2 dataSource:(unsigned int)arg3 dataSourceContentState:(id)arg4 minimumLevelOfService:(unsigned char)arg5 inMemoryItemsOnly:(bool)arg6 error:(id*)arg7;
- (bool)dequeuedContentConsumedForDataSources:(unsigned int)arg1 withError:(id*)arg2;
- (bool)dequeuedContentConsumedWithError:(id*)arg1;
- (bool)dequeuedContentNotConsumed:(id)arg1 dataSource:(unsigned int)arg2 error:(id*)arg3;
- (bool)enqueueContent:(id)arg1 contentProtection:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)registerQueueObserver:(id)arg1 dispatchQueue:(id)arg2;
- (void)setQueue:(id)arg1 forDataSource:(unsigned int)arg2;
- (id)statsWithError:(id*)arg1;
- (unsigned char)waitForObserversWithTimeout:(double)arg1;

@end
