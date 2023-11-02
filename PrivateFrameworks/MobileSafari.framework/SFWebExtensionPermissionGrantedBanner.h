
@interface SFWebExtensionPermissionGrantedBanner : SFPinnableBanner {
    _SFDimmingButton * _allowButton;
    id /* block */  _allowButtonHandler;
    SFThemeColorEffectView * _backdrop;
    NSArray * _backdropConstraints;
    UIStackView * _buttonStackView;
    NSLayoutConstraint * _buttonStackViewWidthConstraint;
    NSArray * _extensions;
    NSString * _grantedHost;
    _SFDimmingButton * _resetExtensionPermissionsButton;
    id /* block */  _resetExtensionPermissionsHandler;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTopConstraint;
}

@property (nonatomic, copy) id /* block */ allowButtonHandler;
@property (nonatomic, copy) id /* block */ resetExtensionPermissionsHandler;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_resetExtensionPermissions;
- (void)_setUpAllowButton;
- (void)_setUpBackdrop;
- (void)_setUpButtonStackView;
- (void)_setUpConstraints;
- (void)_setUpResetExtensionPermissionsButton;
- (void)_setUpTitleLabel;
- (id)_titleLabelFont;
- (id /* block */)allowButtonHandler;
- (id)initWithExtensions:(id)arg1 grantedHost:(id)arg2;
- (void)invalidateBannerLayout;
- (void)layoutSubviews;
- (id /* block */)resetExtensionPermissionsHandler;
- (void)setAllowButtonHandler:(id /* block */)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResetExtensionPermissionsHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;

@end
