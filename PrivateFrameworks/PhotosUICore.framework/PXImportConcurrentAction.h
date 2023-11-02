
@interface PXImportConcurrentAction : NSOperation {
    bool  _executing;
    bool  _finished;
}

- (void)finish;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id)performAction;
- (void)start;

@end
