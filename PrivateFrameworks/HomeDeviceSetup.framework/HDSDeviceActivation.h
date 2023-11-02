
@interface HDSDeviceActivation : NSObject <SignpostProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (id)signpostLog;

- (void)_mae_activateWithData:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
- (void)_mae_createActivationWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)_mae_createSessionWithCompletion:(id /* block */)arg1;
- (void)_mae_getActivationStateWithCompletion:(id /* block */)arg1;
- (id)_setupUserAgent;
- (void)performActivationStep:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)signpostID;

@end
