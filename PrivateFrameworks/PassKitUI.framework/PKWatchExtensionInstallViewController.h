
@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate, PKLoadingUIProviding> {
    ASCLockupView * _appStoreView;
    PKWatchDeviceAppCarouselView * _deviceImageView;
    <PKWatchExtensionInstallViewControllerFlowDelegate> * _flowItemDelegate;
    PKPaymentProvisioningController * _provisioningController;
    PKSecureElementPass * _secureElementPass;
    PKPaymentWebService * _webservice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKWatchExtensionInstallViewControllerFlowDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) PKSecureElementPass *secureElementPass;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentWebService *webservice;

+ (bool)shouldShowWatchExtensionInstallViewControllerForSecureElementPass:(id)arg1 webService:(id)arg2;

- (void).cxx_destruct;
- (void)_installNowPressed;
- (void)_proceedToNextScreen;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowItemDelegate;
- (id)initWithSecureElementPass:(id)arg1 provisioningController:(id)arg2 webService:(id)arg3 context:(long long)arg4;
- (void)loadView;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (id)provisioningController;
- (id)secureElementPass;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSecureElementPass:(id)arg1;
- (void)setWebservice:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (id)webservice;

@end
