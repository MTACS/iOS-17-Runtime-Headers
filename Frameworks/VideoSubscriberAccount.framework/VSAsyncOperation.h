
@interface VSAsyncOperation : NSOperation {
    int  _state;
}

- (void)cancel;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
