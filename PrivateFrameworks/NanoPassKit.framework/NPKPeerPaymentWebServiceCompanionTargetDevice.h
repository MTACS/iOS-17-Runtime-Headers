
@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentWebService * _peerPaymentWebService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly) Class superclass;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)arg1;
- (id)account;
- (id)appleAccountInformation;
- (id)bridgedClientInfo;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deviceClass;
- (id)deviceRegion;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(id /* block */)arg4;
- (id)peerPaymentWebService;
- (id)preferences;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (id)secureElementIdentifiers;
- (void)setPeerPaymentWebService:(id)arg1;
- (void)setPreferences:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
