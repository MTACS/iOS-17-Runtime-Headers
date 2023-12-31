
@interface SSBinaryPromise : NSObject {
    SSPromise * _backingPromise;
}

@property (nonatomic, retain) SSPromise *backingPromise;

+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithPromise:(id)arg1;
+ (id)promiseWithSuccess;

- (void).cxx_destruct;
- (void)_removeFromGlobalPromiseStorage;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)backingPromise;
- (id /* block */)completionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithSuccess;
- (id)init;
- (id)promiseAdapter;
- (bool)resultWithError:(id*)arg1;
- (bool)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setBackingPromise:(id)arg1;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)arg1;

@end
