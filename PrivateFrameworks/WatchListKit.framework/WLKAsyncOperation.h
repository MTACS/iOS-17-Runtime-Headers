
@interface WLKAsyncOperation : NSOperation {
    int  _state;
}

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)executionDidBegin;
- (void)finishExecutionIfPossible;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
