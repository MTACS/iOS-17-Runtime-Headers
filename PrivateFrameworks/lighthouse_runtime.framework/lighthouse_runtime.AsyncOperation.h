
@interface lighthouse_runtime.AsyncOperation : NSOperation {
    void _isExecuting;
    void _isFinished;
    void action;
    void error;
    void lockQueue;
    void task;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic) bool executing;
@property (nonatomic) bool finished;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
