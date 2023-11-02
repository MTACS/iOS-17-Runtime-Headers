
@interface CKRegistrationView : UIScrollView {
    UIView * _authKitSignInView;
    UIImageView * _iconImageView;
    UIButton * _learnMoreButton;
    UIView * _privacyLinkView;
    UILabel * _signingInLabel;
    UIActivityIndicatorView * _signingInSpinner;
    UILabel * _titleLabel;
    UILabel * _verbiageLabel;
}

@property (nonatomic, retain) UIView *authKitSignInView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic, retain) UIView *privacyLinkView;
@property (nonatomic, retain) UILabel *signingInLabel;
@property (nonatomic, retain) UIActivityIndicatorView *signingInSpinner;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *verbiageLabel;

- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (id)authKitSignInView;
- (id)iconImageView;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (struct CGSize { double x1; double x2; })manualSizeToFitForAuthKitSignInView;
- (id)privacyLinkView;
- (void)setAuthKitSignInView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setPrivacyLinkView:(id)arg1;
- (void)setSigningIn:(bool)arg1;
- (void)setSigningInLabel:(id)arg1;
- (void)setSigningInSpinner:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerbiageLabel:(id)arg1;
- (id)signingInLabel;
- (id)signingInSpinner;
- (id)titleLabel;
- (id)verbiageLabel;

@end
