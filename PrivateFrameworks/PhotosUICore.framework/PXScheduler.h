
@interface PXScheduler : NSObject {
    bool  _hasPendingPerformInDefaultRunLoopMode;
    bool  _isPerformingPendingBlocks;
    NSMutableArray * _pendingBlocks;
}

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_enteredDefaultRunLoopMode;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performPendingBlocks;
- (void)_performPendingBlocksIfNeeded;
- (void)dispatchInMainTransaction:(id /* block */)arg1;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)arg1;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;

@end