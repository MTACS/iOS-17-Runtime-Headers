
@interface PRXCardContentView : UIView <ProximityAppleIDSetupUI.PASUIGuardianPresentationView> {
    NSArray * _actionButtonConstraints;
    UIView * _activityIndicator;
    long long  _cardStyle;
    <PRXCardContentViewDelegate> * _delegate;
    UILayoutGuide * _internalContentGuide;
    NSArray * _mainContentConstraints;
    UILayoutGuide * _mainContentGuide;
    PRXLabel * _subtitleLabel;
    NSArray * _subtitleLabelConstraints;
    UIView<PRXTextContainer> * _titleView;
    NSArray * _titleViewConstraints;
    NSLayoutConstraint * _titleViewHeightConstraint;
}

@property (nonatomic, copy) NSArray *actionButtons;
@property (nonatomic, retain) UIView *activityIndicator;
@property (nonatomic, readonly) long long cardStyle;
@property (nonatomic) <PRXCardContentViewDelegate> *delegate;
@property (nonatomic, retain) PRXButton *dismissButton;
@property (nonatomic, readonly) UILayoutGuide *internalContentGuide;
@property (nonatomic, readonly) UILayoutGuide *mainContentGuide;
@property (nonatomic, retain) PRXLabel *subtitleLabel;
@property (nonatomic, readonly) PRXLabel *titleLabel;
@property (nonatomic, readonly) PRXTextView *titleTextView;
@property (nonatomic, retain) UIView<PRXTextContainer> *titleView;

- (void).cxx_destruct;
- (void)_invalidateMainContentConstraints;
- (id)actionButtons;
- (id)activityIndicator;
- (id)auxiliaryViews;
- (long long)cardStyle;
- (id)delegate;
- (id)dismissButton;
- (id)init;
- (id)initWithCardStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cardStyle:(long long)arg2;
- (id)internalContentGuide;
- (id)mainContentGuide;
- (void)setActionButtons:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)titleTextView;
- (id)titleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateTitleTextViewExclusionPathsForCardWidth:(double)arg1;

@end
