
@interface CoreIDVUI.IdentityProofingFedStatsOptinViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void confirmButton;
    void consentResult;
    void learnMoreButton;
    void learnMoreURL;
    void primaryStackView;
    void proofingFlowManager;
    void subtitleLabel;
    void tableView;
    void titleLabel;
    void uiConfig;
    void uiConfigFactory;
    void viewModels;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (void)confirmButtonClicked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)learnMoreButtonClicked;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sizeHeaderToFit;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
