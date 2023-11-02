
@interface _AuthorizationRemoteViewControllerHost : _UIRemoteViewController <AuthenticatorHost, AuthenticatorService> {
    <_AuthorizationRemoteViewControllerHostDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_AuthorizationRemoteViewControllerHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_requestViewController:(id)arg1 connectionHandler:(id /* block */)arg2;
+ (id)exportedInterface;
+ (void)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)authenticatorServiceDidFinishWithError:(id)arg1 reply:(id /* block */)arg2;
- (void)authenticatorServiceDidObtainAuthenticationWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startWithConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (void)stopWithReply:(id /* block */)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
