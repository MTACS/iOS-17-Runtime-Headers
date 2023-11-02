
@interface JXOperation : NSOperation {
    bool  _isExecuting;
    bool  _isFinished;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property bool isExecuting;
@property bool isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)finish;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setStateQueue:(id)arg1;
- (void)start;
- (void)startAndWaitUntilFinished;
- (id)stateQueue;
- (void)willFinish;

@end
