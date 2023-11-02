
@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport> {
    UIActivityIndicatorView * _activityIndicator;
    bool  _activityIndicatorHidden;
    UILabel * _label;
    OBPrivacyLinkController * _privacyLinkController;
    UIView * _scrollContentView;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (getter=isActivityIndicatorHidden, nonatomic) bool activityIndicatorHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, retain) UIView *scrollContentView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activityIndicatorViewStyle;
- (bool)_shouldUseScrollView;
- (id)_textStyle;
- (void)_updateLayout;
- (void)_updateTextColor;
- (id)activityIndicator;
- (id)initWithSpinnerText:(id)arg1;
- (bool)isActivityIndicatorHidden;
- (id)label;
- (void)loadView;
- (id)privacyLinkController;
- (id)scrollContentView;
- (id)scrollView;
- (void)setActivityIndicator:(id)arg1;
- (void)setActivityIndicatorHidden:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPrivacyLinkController:(id)arg1;
- (void)setScrollContentView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
