
@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate> {
    NFMutexLock * _accessLock;
    NSCountedSet * _allKeys;
    <FCFetchCoordinatorDelegate> * _delegate;
    NSHashTable * _fetchGroups;
    FCMapTable * _fetchOperationsByGroup;
    FCBoostableOperationThrottler * _fetchThrottler;
    unsigned long long  _maxConcurrentFetchCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCFetchCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long maxConcurrentFetchCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)init;
- (unsigned long long)maxConcurrentFetchCount;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxConcurrentFetchCount:(unsigned long long)arg1;

@end
