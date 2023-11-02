
@interface PKAppleBalanceExplanationViewController : PKExplanationViewController <PKLoadingUIProviding> {
    <PKAppleBalanceExplanationViewControllerDelegate> * _delegate;
    PKAppleBalanceSetupController * _setupController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAppleBalanceExplanationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bodyText;
- (id)_primaryActionTitle;
- (void)_setShowSpinner:(bool)arg1;
- (id)_titleText;
- (id)delegate;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithSetupController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
