
@interface NAFuture : NSObject <NAPromise> {
    NSMutableArray * _completionBlocks;
    <NAScheduler> * _completionScheduler;
    NSString * _descriptor;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSError * _resultError;
    id  _resultValue;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptor;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ hksp_boolErrorCompletionHandlerAdapter;
@property (readonly) HMFFuture *hmfFuture;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (void)_setShouldEnforceThreadSafety:(bool)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(bool)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithResult:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (bool)_queue_isCancelled;
- (id)addCompletionBlock:(id /* block */)arg1;
- (id)addFailureBlock:(id /* block */)arg1;
- (id)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (id /* block */)completionHandlerAdapter;
- (id)description;
- (id)descriptor;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithNoResult;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (id)recover:(id /* block */)arg1;
- (id)recoverIgnoringError;
- (id)reschedule:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)willAddCompletionBlock;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)asGeneric;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)combineAllFuturesFlatteningArrayResults:(id)arg1;
+ (id)combineAllFuturesIgnoringEmptyResults:(id)arg1;
+ (id)futureWithRetries:(long long)arg1 timeInterval:(double)arg2 workQueue:(id)arg3 block:(id /* block */)arg4;
+ (id)futureWithRetryIntervals:(id)arg1 workQueue:(id)arg2 block:(id /* block */)arg3;

- (id)blockAndWaitForCompletionWithError:(id*)arg1;
- (id)hmfFuture;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)combineAllFuturesFlatteningArrayResults:(id)arg1;
+ (id)combineAllFuturesIgnoringEmptyResults:(id)arg1;
+ (id)futureWithRetries:(long long)arg1 timeInterval:(double)arg2 workQueue:(id)arg3 block:(id /* block */)arg4;
+ (id)futureWithRetryIntervals:(id)arg1 workQueue:(id)arg2 block:(id /* block */)arg3;

- (id)blockAndWaitForCompletionWithError:(id*)arg1;
- (id)hmfFuture;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (void)mtFinishWithFuture:(id)arg1;
- (id)mtSynchronousResult:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)_hksp_chainFutureHelperWithFutures:(id)arg1 index:(unsigned long long)arg2 block:(id /* block */)arg3 ignoreErrors:(bool)arg4;
+ (id)hksp_chainFutures:(id)arg1 returningFirstPassingTest:(id /* block */)arg2;
+ (id)hksp_chainFutures:(id)arg1 returningFirstPassingTest:(id /* block */)arg2 ignoreErrors:(bool)arg3;
+ (id)hksp_expiringFutureWithTimeout:(double)arg1;

- (id /* block */)hksp_boolErrorCompletionHandlerAdapter;

@end
