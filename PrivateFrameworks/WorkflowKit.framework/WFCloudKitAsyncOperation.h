
@interface WFCloudKitAsyncOperation : NSOperation {
    bool  _isExecuting;
    bool  _isFinished;
}

@property bool isExecuting;
@property bool isFinished;

- (void)finishExecuting;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)start;
- (void)startExecuting;

@end
