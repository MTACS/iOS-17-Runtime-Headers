
@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {
    UIView * _authKitSignInView;
    CNFRegSplashSignInController * _controller;
    UIButton * _learnMoreButton;
    long long  _serviceType;
    UILabel * _signingInLabel;
    UIActivityIndicatorView * _signingInSpinner;
    PSSpecifier * _specifier;
    UIImageView * _splashImageView;
    UILabel * _titleLabel;
    UILabel * _verbiageLabel;
}

@property (nonatomic, retain) UIView *authKitSignInView;
@property (nonatomic) CNFRegSplashSignInController *controller;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic) long long serviceType;
@property (nonatomic, retain) UIImageView *splashImageView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *verbiageLabel;

- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (id)_serviceTitle;
- (id)_splashImage;
- (id)authKitSignInView;
- (id)controller;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (double)preferredHeightForWidth:(double)arg1;
- (long long)serviceType;
- (void)setAuthKitSignInView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setSigningIn:(bool)arg1;
- (void)setSplashImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerbiageLabel:(id)arg1;
- (id)signingInLabel;
- (id)signingInSpinner;
- (id)splashImageView;
- (id)titleLabel;
- (id)verbiageLabel;

@end
