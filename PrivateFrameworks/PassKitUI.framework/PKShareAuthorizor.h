
@interface PKShareAuthorizor : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    id /* block */  _authorizeHandler;
    id /* block */  _completion;
    LAContext * _context;
    bool  _didFinish;
    bool  _isAuthorizationHandlerRunning;
    NSString * _presentationSceneIdentifier;
    bool  _resultSuccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_authorizeDeviceOwnerWithAuthHandler:(id /* block */)arg1 completion:(id /* block */)arg2 context:(id)arg3 invalidateContext:(bool)arg4;
+ (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)authorizeForRequest:(id)arg1 presentationSceneIdentifier:(id)arg2 authHandler:(id /* block */)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_authorizeForRequest:(id)arg1 presentationSceneIdentifier:(id)arg2 authHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_handleDidFinishIfNeeded;
- (void)_invalidate;
- (void)dealloc;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(id /* block */)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;

@end
