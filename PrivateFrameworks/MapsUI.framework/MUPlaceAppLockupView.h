
@interface MUPlaceAppLockupView : UIView {
    UIImageView * _appLockupImageView;
    <MUPlaceAppLockupViewDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    UIButton * _punchoutButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UILayoutGuide * _titleSubtitleLayoutGuide;
    <MUAppLockupViewModel> * _viewModel;
}

@property (nonatomic) <MUPlaceAppLockupViewDelegate> *delegate;
@property (nonatomic, readonly) double scaledHeight;
@property (nonatomic, retain) <MUAppLockupViewModel> *viewModel;

+ (struct CGSize { double x1; double x2; })appIconSize;

- (void).cxx_destruct;
- (void)_punchOutButtonSelected;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateHeightConstraint;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scaledHeight;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
