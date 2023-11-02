
@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {
    NSObject<OS_dispatch_group> * _nextScreenGroup;
    PKPaymentSetupProduct * _product;
    NSString * _subtitleText;
    bool  _termsAccepted;
    NSString * _titleText;
}

@property (nonatomic, readonly) PKPaymentSetupProduct *product;

+ (bool)readerModeProvisioningIsSupported;

- (void).cxx_destruct;
- (void)_downloadCardArtIfNecessary:(id /* block */)arg1;
- (void)_prepareForProvisioningViewController;
- (void)_pushReaderModeProvisioningWithCompletion:(id /* block */)arg1;
- (void)_registerLocalDeviceWithCompletion:(id /* block */)arg1;
- (void)_showTerms;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)footerView;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 product:(id)arg3;
- (id)product;
- (void)viewDidDisappear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
