
@interface CATSerialOperationEnqueuer : NSObject {
    NSOperation * mCurrentlyExecutingOperation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mLock;
    NSMutableArray * mPendingOperations;
    id  mStrongSelf;
    NSOperationQueue * mTargetQueue;
}

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)checkIfOperationIsFinished:(id)arg1;
- (void)dealloc;
- (void)enqueueNextOperation;
- (id)initWithTargetOperationQueue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performThreadSafeBlock:(id /* block */)arg1;
- (void)startObservingOperation:(id)arg1;
- (void)stopObservingOperation:(id)arg1;

@end
