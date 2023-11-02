
@interface PKPaymentSetupPurchaseController : NSObject <RemoteUIControllerDelegate> {
    bool  _acceptedTerms;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    UIViewController<PKPaymentSetupPurchaseControllerDelegate><PKPaymentSetupDelegate><PKPaymentAuthorizationCoordinatorDelegate><PKPaymentAuthorizationCoordinatorPrivateDelegate> * _purchaseControllerDelegate;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    RemoteUIController * _termsController;
}

@property (nonatomic) bool acceptedTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) RemoteUIController *termsController;

- (void).cxx_destruct;
- (bool)acceptedTerms;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 purchaseControllerDelegate:(id)arg4 product:(id)arg5 provisioningMetadata:(id)arg6;
- (id)paymentRequestForAmount:(id)arg1;
- (id)paymentRequestForProduct:(id)arg1 serviceProviderProduct:(id)arg2 productItem:(id)arg3;
- (void)presentAddCardAlert:(id)arg1;
- (void)presentTermsAndConditionsWithCompletion:(id /* block */)arg1;
- (void)presetPaymentRequest:(id)arg1 forResultType:(long long)arg2;
- (void)setAcceptedTerms:(bool)arg1;
- (void)setTermsController:(id)arg1;
- (id)termsController;

@end
