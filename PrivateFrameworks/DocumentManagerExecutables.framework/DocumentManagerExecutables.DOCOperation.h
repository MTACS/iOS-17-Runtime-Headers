
@interface DocumentManagerExecutables.DOCOperation : NSOperation {
    void _isExecuting;
    void _isFinished;
    void callbackQueue;
    void finishedBlock;
    void synchronizationQueue;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic) bool executing;
@property (nonatomic) bool finished;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
