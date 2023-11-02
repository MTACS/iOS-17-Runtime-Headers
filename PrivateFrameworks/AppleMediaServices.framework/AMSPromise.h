
@interface AMSPromise : NSObject {
    AMSPromiseCompletionBlocks * _completionBlocks;
    AMSPromiseResult * _promiseResult;
    NSConditionLock * _stateLock;
}

@property (getter=asc_isFailed, nonatomic, readonly) bool asc_failed;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (retain) AMSPromiseResult *promiseResult;
@property (nonatomic, readonly) NSConditionLock *stateLock;
@property (getter=isTimedOut, nonatomic, readonly) bool timedOut;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (void)_configureFlattenedPromise:(id)arg1 withPromises:(id)arg2 results:(id)arg3 previousError:(id)arg4 currentPromiseIndex:(unsigned long long)arg5;
+ (void)_enumeratePromises:(id)arg1 startingAt:(long long)arg2 block:(id /* block */)arg3;
+ (bool)_errorIsCanceledError:(id)arg1;
+ (bool)_errorIsTimeOutError:(id)arg1;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAll:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAny:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (id)promiseWithPromiseResult:(id)arg1;
+ (id)promiseWithResult:(id)arg1;
+ (id)promiseWithSome:(id)arg1;
+ (id)promiseWithSome:(id)arg1 timeout:(double)arg2;
+ (id)unwrappedPromiseWithPromise:(id)arg1;

- (void).cxx_destruct;
- (bool)_isFinished;
- (void)addBlock:(id /* block */)arg1 orCallWithResult:(id /* block */)arg2;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)binaryPromiseAdapter;
- (id /* block */)boolCompletionHandlerAdapter;
- (bool)cancel;
- (id)catchWithBlock:(id /* block */)arg1;
- (id)completionBlocks;
- (id /* block */)completionHandlerAdapter;
- (id)continueWithBlock:(id /* block */)arg1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithPromise:(id)arg1;
- (bool)finishWithPromiseResult:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isTimedOut;
- (id)mutablePromiseAdapter;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id)promiseResult;
- (id)promiseWithTimeout:(double)arg1;
- (void)resultBeforeDate:(id)arg1 completion:(id /* block */)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (void)resultWithCompletion:(id /* block */)arg1;
- (id)resultWithError:(id*)arg1;
- (void)resultWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setCompletionBlocks:(id)arg1;
- (void)setPromiseResult:(id)arg1;
- (id)stateLock;
- (id)thenWithBlock:(id /* block */)arg1;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

- (id)asc_copy;
- (bool)asc_isFailed;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)pk_addQueue:(id)arg1 finishBlock:(id /* block */)arg2;

@end
