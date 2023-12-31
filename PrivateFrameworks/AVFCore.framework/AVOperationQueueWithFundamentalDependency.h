
@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {
    NSOperation * _fundamentalOperation;
}

- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)dealloc;
- (id)initWithFundamentalOperation:(id)arg1;

@end
