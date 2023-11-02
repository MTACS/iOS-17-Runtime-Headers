
@interface AMSMutableLazyPromise : AMSLazyPromise

- (bool)cancel;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithPromise:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTimeout:(double)arg1 block:(id /* block */)arg2;

@end
