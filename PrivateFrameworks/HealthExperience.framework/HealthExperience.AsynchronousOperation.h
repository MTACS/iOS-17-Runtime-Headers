
@interface HealthExperience.AsynchronousOperation : NSOperation {
    void _autoFinishesOnCancel;
    void operationState;
    void workLock;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)init;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end
