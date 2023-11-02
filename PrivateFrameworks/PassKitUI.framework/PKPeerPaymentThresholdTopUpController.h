
@interface PKPeerPaymentThresholdTopUpController : NSObject <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentActionControllerDelegate, PKThresholdTopUpSetupViewControllerDelegate> {
    PKPeerPaymentAccount * _account;
    id /* block */  _actionCompletedBlock;
    long long  _context;
    PKPeerPaymentActionController * _controller;
    <PKPeerPaymentThresholdTopUpControllerDelegate> * _delegate;
    PKPeerPaymentRecurringPayment * _existingTopUp;
    PKPaymentPass * _pass;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKThresholdTopUpSetupViewController * _vc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_messageForErrorCode:(unsigned long long)arg1;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_setupCompleteImage;
- (id)_titleForErrorCode:(unsigned long long)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPeerPaymentAccount:(id)arg1 pass:(id)arg2 context:(long long)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2;
- (void)peerPaymentActionController:(id)arg1 requestPresentViewController:(id)arg2;
- (void)presentTopUpFlowForRecurringPayment:(id)arg1;
- (id)presentationSceneBundleIdentifierForPeerPaymentActionController:(id)arg1;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)arg1;
- (void)thresholdTopUpDidSelectCancel:(id)arg1;
- (void)thresholdTopUpDidSelectContinue:(id)arg1 completion:(id /* block */)arg2;
- (void)thresholdTopUpDidSelectUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)thresholdTopUpPerformCancel:(id)arg1 completion:(id /* block */)arg2;

@end
