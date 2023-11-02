
@interface HMFFuture : NSObject

@property (readonly) NAFuture *naFuture;
@property (readonly) struct _HMFFutureBlockOutcome { long long x1; id x2; } outcomeIfSettled;
@property (getter=isPending, readonly) bool pending;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)all:(id)arg1;
+ (id)allSettled:(id)arg1;
+ (id)any:(id)arg1;
+ (id)anySettled:(id)arg1;
+ (id)futureForOperation:(id)arg1;
+ (id)futureWithDelay:(double)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithNoValue;
+ (id)futureWithPromise:(id*)arg1;
+ (id)futureWithValue:(id)arg1;
+ (id)inContext:(id)arg1 perform:(id /* block */)arg2;

- (id)description;
- (id)finally:(id /* block */)arg1;
- (void)getResultWithCompletion:(id /* block */)arg1;
- (id)ignoreErrors;
- (id)ignoreOutcome;
- (id)ignoreResult;
- (id)inContext:(id)arg1 finally:(id /* block */)arg2;
- (id)inContext:(id)arg1 recover:(id /* block */)arg2;
- (id)inContext:(id)arg1 then:(id /* block */)arg2;
- (id)inContext:(id)arg1 then:(id /* block */)arg2 orRecover:(id /* block */)arg3;
- (bool)isPending;
- (struct _HMFFutureBlockOutcome { long long x1; id x2; })outcomeIfSettled;
- (id)recover:(id /* block */)arg1;
- (id)then:(id /* block */)arg1;
- (id)then:(id /* block */)arg1 orRecover:(id /* block */)arg2;
- (id)timeout:(double)arg1;
- (bool)waitForResult:(id*)arg1 orError:(id*)arg2 withTimeout:(double)arg3;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)naFuture;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)naFuture;

@end
