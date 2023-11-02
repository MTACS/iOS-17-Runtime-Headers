
@interface CoreIDVUI.IdentityProofingReviewSubmissionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_cancelBarButton;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryStackView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_subTitleLabel;
    void $__lazy_storage_$_tableView;
    void $__lazy_storage_$_titleLabel;
    void advancedAfterProofingBegan;
    void analyticsReporter;
    void biometricBindingController;
    void biometricBindingViewController;
    void bottomTrayBottomSpacing;
    void bottomTrayWidthSpacing;
    void context;
    void documentsRepository;
    void documentsToBeReviewed;
    void eligibilityHelper;
    void hasAttemptedToShowLivenessAlert;
    void primaryButtonHeight;
    void primaryStackViewTopSpacingDivisor;
    void proofingFlowManager;
    void proofingRequestTimeout;
    void scrollViewLeadingSpacing;
    void scrollViewTrailingSpacing;
    void secondaryButtonHeight;
    void tableViewCellIdentifier;
    void tableViewHeightDivisor;
    void tableViewRowHeightConstant;
    void unboundACL;
    void viewConfiguration;
}

- (void).cxx_destruct;
- (void)cancelButtonClicked;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateUI;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
