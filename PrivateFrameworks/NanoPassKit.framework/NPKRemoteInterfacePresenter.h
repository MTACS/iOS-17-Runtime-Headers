
@interface NPKRemoteInterfacePresenter : NSObject {
    <NPKRemoteInterfacePresenterDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <NPKRemoteInterfacePresenterDelegate> *delegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)arg1 withError:(id)arg2;
- (id)delegate;
- (id)init;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(id /* block */)arg3;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(id /* block */)arg7;
- (void)presentPasscodeUpgradeRequestWithChangeType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)presentSetupApplePayAlert:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)arg1 completion:(id /* block */)arg2;
- (void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(bool)arg1 error:(id)arg2;
- (id)xpcConnection;

@end
