
@interface PPDKStorage : NSObject {
    _PASLock * _entityLock;
    NSObject<OS_dispatch_semaphore> * _entityWriteSem;
    _PASLock * _topicLock;
    NSObject<OS_dispatch_semaphore> * _topicWriteSem;
}

@property (nonatomic, readonly) double entityStreamCooldownTimeRemaining;
@property (nonatomic, readonly) double topicStreamCooldownTimeRemaining;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (bool)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3;
- (bool)deleteEvents:(id)arg1 error:(id*)arg2;
- (id)entityStream;
- (double)entityStreamCooldownTimeRemaining;
- (id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id*)arg5 block:(id /* block */)arg6;
- (bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(bool)arg5 remoteOnly:(bool)arg6 error:(id*)arg7 block:(id /* block */)arg8;
- (id)namedEntityRecordFromEvent:(id)arg1;
- (double)namedEntityWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (unsigned int)readBatchSize;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(id /* block */)arg1;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(id /* block */)arg1;
- (id)registerForTopicsRemoteAdditionWithBlock:(id /* block */)arg1;
- (id)registerForTopicsRemoteDeletionWithBlock:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (bool)saveEvents:(id)arg1 stream:(id)arg2 maxRetries:(long long)arg3 retryInterval:(double)arg4 shouldContinueBlock:(id /* block */)arg5;
- (id)tombstoneStream;
- (id)topicRecordFromEvent:(id)arg1;
- (id)topicStream;
- (double)topicStreamCooldownTimeRemaining;
- (double)topicWriteBatchInterval;
- (unsigned int)topicWriteBatchSize;

@end
