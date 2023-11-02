
@interface PKAccountVerifySSNPageViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupField * _aboutCreditReportingField;
    PKAccount * _account;
    PKPaymentSetupFieldFooterView * _footerView;
    bool  _isLoading;
}

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_handleNextStep;
- (void)_showSpinner:(bool)arg1;
- (void)_terminateFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithAccount:(id)arg1 context:(long long)arg2;
- (void)viewDidLoad;

@end
