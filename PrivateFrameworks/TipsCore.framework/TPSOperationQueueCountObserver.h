
@interface TPSOperationQueueCountObserver : NSObject {
    id /* block */  _completionBlock;
    unsigned long long  _lastOperationCount;
    TPSOperationQueue * _operationQueue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) unsigned long long lastOperationCount;
@property (nonatomic) TPSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)lastOperationCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setLastOperationCount:(unsigned long long)arg1;
- (void)setOperationQueue:(id)arg1;

@end
