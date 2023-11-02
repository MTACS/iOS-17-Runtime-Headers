
@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _asyncOperationLock;
    NSOperationQueue * _childOperationQueue;
    NSError * _error;
    bool  _isExecuting;
    bool  _isFinished;
    long long  _qualityOfServiceForChildOperationQueue;
}

@property (nonatomic, readonly, copy) NSError *error;

- (void).cxx_destruct;
- (void)_execute;
- (void)enqueueChildOperation:(id)arg1;
- (id)error;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
