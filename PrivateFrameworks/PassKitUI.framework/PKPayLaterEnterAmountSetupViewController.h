
@interface PKPayLaterEnterAmountSetupViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    NSString * _maximumString;
    NSString * _minimumString;
    NSString * _pageTag;
    PKPayLaterSetupFlowController * _setupController;
}

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_reportViewDidAppear:(bool)arg1;
- (void)currencyAmountUpdated:(id)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithSetupFlowController:(id)arg1;
- (void)nextButtonTapped;
- (bool)shouldAllowDecimalInput;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
