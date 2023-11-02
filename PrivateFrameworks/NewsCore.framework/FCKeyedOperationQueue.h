
@interface FCKeyedOperationQueue : NSObject {
    NSMutableDictionary * _cancelHandlersByKey;
    <FCKeyedOperationQueueDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableSet * _keysForExecutingOperations;
    long long  _maxConcurrentOperationCount;
    NSMutableOrderedSet * _mutableKeyQueue;
    NSObject<OS_dispatch_group> * _operationExecutionGroup;
    bool  _suspended;
}

@property (nonatomic, readonly) <FCKeyedOperationQueueDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, copy) NSOrderedSet *keyQueue;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (id)delegate;
- (id)executionQueue;
- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2;
- (bool)isSuspended;
- (id)keyQueue;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setKeyQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;

@end
