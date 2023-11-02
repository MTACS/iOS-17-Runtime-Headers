
@interface AMSMutablePromise : AMSPromise

+ (bool)_finishPromise:(id)arg1 withResult:(id)arg2 error:(id)arg3 logDuplicateFinishes:(bool)arg4;
+ (bool)cancelPromise:(id)arg1;
+ (bool)finishPromise:(id)arg1 withError:(id)arg2;
+ (bool)finishPromise:(id)arg1 withPromise:(id)arg2;
+ (bool)finishPromise:(id)arg1 withResult:(id)arg2;
+ (bool)finishPromise:(id)arg1 withResult:(id)arg2 error:(id)arg3;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAll:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAny:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (void)startTimeoutForPromise:(id)arg1 timeout:(double)arg2;

- (bool)_finishWithResult:(id)arg1 error:(id)arg2 logDuplicateFinishes:(bool)arg3;
- (bool)cancel;
- (id)catchWithBlock:(id /* block */)arg1;
- (id)continueWithBlock:(id /* block */)arg1;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithPromise:(id)arg1;
- (bool)finishWithPromiseResult:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)promiseWithTimeout:(double)arg1;
- (void)startTimeout:(double)arg1;
- (id)thenWithBlock:(id /* block */)arg1;

@end
