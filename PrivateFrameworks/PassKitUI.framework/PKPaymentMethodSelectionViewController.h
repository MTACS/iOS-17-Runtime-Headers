
@interface PKPaymentMethodSelectionViewController : PKDynamicCollectionViewController <PKPaymentMethodSectionControllerDelegate> {
    PKPaymentMethodActionSectionController * _actionsController;
    <PKPaymentMethodSelectionViewControllerDelegate> * _delegate;
    PKPaymentMethodPassesSectionController * _passesController;
    PKPaymentRequest * _paymentRequest;
    PKPaymentMethodPeerPaymentSectionController * _peerPaymentController;
    PKPaymentPass * _selectedPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePassUpdate:(id)arg1;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPaymentRequest:(id)arg1 selectedPass:(id)arg2 paymentMethodName:(id)arg3 paymentMethodIdentifier:(id)arg4 allowAppleCashToggle:(bool)arg5 useAppleCashBalance:(bool)arg6 viewStyle:(long long)arg7 delegate:(id)arg8;
- (void)performedAddPaymentMethodWithCompletion:(id /* block */)arg1;
- (void)requestOpenURL:(id)arg1;
- (void)selectedPass:(id)arg1;
- (void)toggledUseAppleCashBalance:(bool)arg1;

@end
