
@interface AMSMutableBinaryPromise : AMSBinaryPromise

+ (bool)cancelPromise:(id)arg1;
+ (bool)finishPromise:(id)arg1 withError:(id)arg2;
+ (bool)finishPromise:(id)arg1 withPromise:(id)arg2;
+ (bool)finishPromise:(id)arg1 withSuccess:(bool)arg2;
+ (bool)finishPromise:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;

- (bool)cancel;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithPromise:(id)arg1;
- (bool)finishWithSuccess;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;

@end
