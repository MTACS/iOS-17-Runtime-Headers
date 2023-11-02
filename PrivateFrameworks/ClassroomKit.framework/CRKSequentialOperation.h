
@interface CRKSequentialOperation : CATOperation {
    CATOperation * _failedOperation;
    unsigned long long  _frontOfQueue;
    NSArray * _operations;
    CATOperationQueue * _queue;
}

@property (nonatomic, retain) CATOperation *failedOperation;
@property (nonatomic) unsigned long long frontOfQueue;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) CATOperationQueue *queue;

+ (id)sequentialOperationWithOperations:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)enqueueFront;
- (id)failedOperation;
- (unsigned long long)frontOfQueue;
- (void)frontOperationDidFinish:(id)arg1;
- (id)init;
- (id)initWithSequentialOperations:(id)arg1 queue:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)operations;
- (id)queue;
- (void)setFailedOperation:(id)arg1;
- (void)setFrontOfQueue:(unsigned long long)arg1;

@end
