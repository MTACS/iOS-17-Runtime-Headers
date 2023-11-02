
@interface AMSTask : NSObject {
    NSObject<OS_dispatch_queue> * _performTaskQueue;
    AMSPromise * _promise;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _promiseAccessLock;
    long long  _runMode;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (nonatomic, retain) AMSPromise *promise;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } promiseAccessLock;
@property (nonatomic) long long runMode;
@property (getter=isRunning, nonatomic, readonly) bool running;

+ (id)taskCache;

- (void).cxx_destruct;
- (bool)cancel;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isRunning;
- (id)performBinaryTaskWithBlock:(id /* block */)arg1;
- (id)performTaskQueue;
- (id)performTaskWithBlock:(id /* block */)arg1;
- (id)performTaskWithPromiseBlock:(id /* block */)arg1;
- (id)promise;
- (struct os_unfair_lock_s { unsigned int x1; })promiseAccessLock;
- (long long)runMode;
- (void)setPerformTaskQueue:(id)arg1;
- (void)setPromise:(id)arg1;
- (void)setPromiseAccessLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setRunMode:(long long)arg1;

@end
