
@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostAuthorizationControllerDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <HKHealthPrivacyHostAuthorizationControllerDelegate> *delegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_remoteObjectProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)show;
- (id)xpcConnection;

@end
