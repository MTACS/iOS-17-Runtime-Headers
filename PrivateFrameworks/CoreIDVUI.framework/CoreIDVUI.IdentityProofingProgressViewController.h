
@interface CoreIDVUI.IdentityProofingProgressViewController : UIViewController {
    void $__lazy_storage_$_scrollView;
    void activityIndicator;
    void assetProvider;
    void config;
    void imageResolutionHelper;
    void imageView;
    void imageViewContainer;
    void primaryLabel;
    void primaryStackView;
    void progressType;
    void proofingFlowManager;
    void secondaryStackView;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUI;
- (void)updateViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
