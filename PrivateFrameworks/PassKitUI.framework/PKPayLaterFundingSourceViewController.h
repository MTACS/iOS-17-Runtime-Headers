
@interface PKPayLaterFundingSourceViewController : PKPayLaterSetupViewController <PKPayLaterFundingSourceSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    bool  _autoPayment;
    PKPayLaterFundingSourceSectionController * _sectionController;
    PKPayLaterPaymentSource * _selectedFundingSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subtitle;
- (id)_title;
- (void)_updateEnabledButtons;
- (id)additionalAnalyticsDictionary;
- (void)didSelectFundingSource:(id)arg1;
- (void)didUpdateAutoPayment:(bool)arg1;
- (id)initWithSetupFlowController:(id)arg1;
- (void)nextButtonTapped;
- (void)reloadFundingSources;
- (void)setShowNavigationBarSpinner:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
