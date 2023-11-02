
@interface NanoPhotosCore.AsyncOperation : NSOperation {
    void _state;
    void stateQueue;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) bool ready;

- (void).cxx_destruct;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)main;
- (void)start;

@end
