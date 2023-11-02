
@interface HMDelegateCaller : NSObject

+ (id)delegateCallerWithOperationQueue:(id)arg1;

- (id)_localizedError:(id)arg1;
- (void)callCompletion:(id /* block */)arg1 actionSet:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 array:(id)arg2;
- (void)callCompletion:(id /* block */)arg1 array:(id)arg2 additionalAccessoryInfo:(id)arg3 error:(id)arg4;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 array:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 boolValue:(bool)arg3 array:(id)arg4;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 dictionary:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 mediaSystem:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 obj:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 proxiedDevice:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 error:(id)arg2 snapshot:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 errorString:(id)arg2;
- (void)callCompletion:(id /* block */)arg1 eventTrigger:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 home:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 invitations:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 isUsingHomeKit:(bool)arg2 isUsingCloudServices:(bool)arg3 error:(id)arg4;
- (void)callCompletion:(id /* block */)arg1 obj:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 room:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 service:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 serviceGroup:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 timerTrigger:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 user:(id)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 value:(bool)arg2 conflictName:(id)arg3 error:(id)arg4;
- (void)callCompletion:(id /* block */)arg1 value:(bool)arg2 error:(id)arg3;
- (void)callCompletion:(id /* block */)arg1 zone:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invokeBlock:(id /* block */)arg1;

@end
