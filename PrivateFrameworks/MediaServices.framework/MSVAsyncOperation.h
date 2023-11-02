
@interface MSVAsyncOperation : NSOperation {
    bool  __executing;
    bool  __finished;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSError * _error;
}

@property (getter=_isExecuting, setter=_setExecuting:, nonatomic) bool _executing;
@property (getter=_isFinished, setter=_setFinished:, nonatomic) bool _finished;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (bool)_isExecuting;
- (bool)_isFinished;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (id)accessQueue;
- (id)error;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setError:(id)arg1;
- (void)start;

@end
