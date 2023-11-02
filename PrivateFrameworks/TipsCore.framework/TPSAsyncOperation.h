
@interface TPSAsyncOperation : NSOperation {
    bool  _cancelled;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _preCompletionBlock;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) id /* block */ preCompletionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id)error;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)lockExec:(id /* block */)arg1;
- (id /* block */)preCompletionBlock;
- (void)setError:(id)arg1;
- (void)setPreCompletionBlock:(id /* block */)arg1;
- (void)start;

@end
