
@interface VUIAsynchronousOperation : NSOperation {
    int  _state;
}

- (void)executionDidBegin;
- (void)finishExecutionIfPossible;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
