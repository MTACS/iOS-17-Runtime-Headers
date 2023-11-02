
@interface PKDynamicProvisioningFieldsPageViewController : PKPaymentSetupFieldsViewController {
    UIActivityIndicatorView * _activityIndicatorView;
    bool  _backHidden;
    UIBarButtonItem * _cancelButton;
    PKDynamicProvisioningFieldsPageContent * _fieldsPage;
    UIBarButtonItem * _hiddenRightBarButtonItem;
    bool  _isLoading;
    UIBarButtonItem * _spinningNavBarItem;
}

@property (nonatomic, readonly) PKDynamicProvisioningFieldsPageContent *fieldsPage;
@property (nonatomic, readonly) bool isLoading;

- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)fieldsPage;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 fieldsPage:(id)arg4;
- (bool)isLoading;
- (void)showSpinner:(bool)arg1;
- (void)viewDidLoad;

@end
