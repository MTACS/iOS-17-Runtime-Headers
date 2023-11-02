
@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService * _peerPaymentService;
    <PKPeerPaymentTargetDeviceDelegate> * _targetDeviceDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAccountChangedNotification:(id)arg1;
- (void)_handlePreferencesChangedNotification:(id)arg1;
- (id)account;
- (id)appleAccountInformation;
- (id)bridgedClientInfo;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deviceClass;
- (id)deviceRegion;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)initWithTargetDeviceDelegate:(id)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(id /* block */)arg4;
- (id)preferences;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(id /* block */)arg4;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)arg1;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (id)secureElementIdentifiers;
- (void)setPreferences:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
