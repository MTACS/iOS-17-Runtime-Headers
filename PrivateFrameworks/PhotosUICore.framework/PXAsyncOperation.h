
@interface PXAsyncOperation : NSOperation {
    int  _operationState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic, readonly) bool px_shouldWaitForCancel;

- (void)cancel;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)px_finishIfPossible;
- (bool)px_shouldWaitForCancel;
- (void)px_start;
- (void)start;

@end
