
@interface HAP2SerializedOperationQueue : HAP2LoggingObject {
    NSOperation * _lastOperation;
    HAP2Lock * _lock;
    NSString * _name;
    NSOperationQueue * _queue;
}

@property (nonatomic) NSOperation *lastOperation;
@property (nonatomic, readonly) HAP2Lock *lock;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSOperationQueue *queue;

+ (id)commonOperationQueue;

- (void).cxx_destruct;
- (id)_swapLastOperation:(id)arg1;
- (void)addBlock:(id /* block */)arg1;
- (void)addConcurrentBlock:(id /* block */)arg1;
- (void)addConcurrentOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)assertCurrentQueue;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 operationQueue:(id)arg2;
- (id)lastOperation;
- (id)lock;
- (id)name;
- (id)queue;
- (void)setLastOperation:(id)arg1;

@end
