
@interface SGFuture : NSObject {
    bool  _alwaysUseCallbacksQueue;
    NSObject<OS_dispatch_queue> * _callbacks;
    NSError * _error;
    bool  _isComplete;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSObject * _parentObject;
    void * _parentObjectKey;
    NSObject * _result;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
    bool  _yoDontLeaveMeHangingBro;
}

@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createAfter:(id)arg1 onCreate:(id /* block */)arg2;
+ (id)createWithImmediateError:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1 error:(id)arg2;
+ (id)futureForObject:(id)arg1 withKey:(void*)arg2 onCreate:(id /* block */)arg3;
+ (void)waitForFuturesToComplete:(id)arg1 withCallback:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_clearTimeoutNonThreadSafe;
- (bool)_finishWithResult:(id)arg1 orError:(id)arg2;
- (void)_wait:(id /* block */)arg1 forSyncAPI:(bool)arg2;
- (void)clearTimeout;
- (bool)completeWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)completer;
- (void)dealloc;
- (void)disassociateFromParentObject;
- (id)error;
- (bool)fail:(id)arg1;
- (id)init;
- (bool)isComplete;
- (id)result;
- (void)setTargetQueue:(id)arg1 useAfterCompletion:(bool)arg2;
- (void)setTimeout:(double)arg1;
- (bool)succeed:(id)arg1;
- (id)wait;
- (void)wait:(id /* block */)arg1;
- (id)waitWithTimeout:(double)arg1;
- (id)workQueue;

@end
