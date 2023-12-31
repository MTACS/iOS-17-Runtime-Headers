
@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray * _completionBlocks;
    bool  _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(id /* block */)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(id /* block */)arg1 orCallWithFutureResult:(id)arg2;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (id)init;
- (void)setShouldCallImmediately:(bool)arg1;
- (bool)shouldCallImmediately;

@end
