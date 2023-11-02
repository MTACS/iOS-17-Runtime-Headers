
@interface ICACAccountVerificationOperation : ICUserVerificationOperation <AMSAuthenticateTaskDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)execute;
- (void)finishWithError:(id)arg1;

@end
