
@interface BPSPublisher : NSObject <BPSPublisher>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (id)bufferWithSize:(unsigned long long)arg1 prefetch:(unsigned long long)arg2 whenFull:(unsigned long long)arg3;
- (id)collect;
- (id)combineLatestwithOther:(id)arg1;
- (bool)completed;
- (id)connectableSinkWithCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (id)correlateWithCurrent:(id)arg1 comparator:(id /* block */)arg2 correlateHandler:(id)arg3;
- (id)debounceFor:(double)arg1 getTimestamp:(id /* block */)arg2;
- (id)drivableSinkWithBookmark:(id)arg1 completion:(id /* block */)arg2 shouldContinue:(id /* block */)arg3;
- (id)filterWithIsIncluded:(id /* block */)arg1;
- (id)flatMapWithTransform:(id /* block */)arg1;
- (id)groupByKey:(id /* block */)arg1;
- (id)handleEventsReceiveOutput:(id /* block */)arg1 receiveCancel:(id /* block */)arg2;
- (id)handleEventsReceiveSubscription:(id /* block */)arg1 receiveOutput:(id /* block */)arg2 receiveCompletion:(id /* block */)arg3 receiveCancel:(id /* block */)arg4 receiveRequest:(id /* block */)arg5;
- (id)last;
- (id)mapWithTransform:(id /* block */)arg1;
- (id)mergeWithOther:(id)arg1;
- (id)mergeWithOthers:(id)arg1;
- (id)multicast;
- (id)multicastCreateSubject:(id /* block */)arg1;
- (id)multicastSubject:(id)arg1;
- (id)orderedMergeWithOther:(id)arg1 comparator:(id /* block */)arg2;
- (id)orderedMergeWithOthers:(id)arg1 comparator:(id /* block */)arg2;
- (id)reduce:(id)arg1;
- (id)reduceWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)removeDuplicatesWithIsDuplicate:(id /* block */)arg1;
- (void)reset;
- (id)scanWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)sequenceWithSequence:(id)arg1;
- (id)sinkWithBookmark:(id)arg1 completion:(id /* block */)arg2 receiveInput:(id /* block */)arg3;
- (id)sinkWithCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)sinkWithCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (id)startWithSubscriber:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)throttleFor:(double)arg1 latest:(bool)arg2 getTimestamp:(id /* block */)arg3;
- (id)timerFor:(double)arg1 getTimestamp:(id /* block */)arg2;
- (id)upstreamPublishers;
- (id)windowByKey:(id /* block */)arg1 assigner:(id)arg2;
- (id)windowWithAssigner:(id)arg1;
- (id)zipWithOther:(id)arg1;
- (id)zipWithOthers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)trackDerivativesInDatabaseWithURL:(id)arg1 derivedTableName:(id)arg2;

@end
