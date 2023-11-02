
@interface SFPrivateBrowsingPrivacyProtectionsBanner : SFPinnableBanner {
    SFThemeColorEffectView * _backdrop;
    NSArray * _backdropConstraints;
    UIStackView * _buttonStackView;
    NSLayoutConstraint * _buttonStackViewWidthConstraint;
    _SFDimmingButton * _dismissButton;
    id /* block */  _dismissButtonHandler;
    id /* block */  _reducePrivacyProtectionsActionHandler;
    _SFDimmingButton * _reducePrivacyProtectionsButton;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTopConstraint;
}

@property (nonatomic, copy) id /* block */ dismissButtonHandler;
@property (nonatomic, copy) id /* block */ reducePrivacyProtectionsActionHandler;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_reducePrivacyProtections;
- (id)_titleLabelFont:(bool)arg1;
- (void)_updateButtonStackViewAxisIfNeeded;
- (id /* block */)dismissButtonHandler;
- (id)init;
- (void)invalidateBannerLayout;
- (void)layoutSubviews;
- (id /* block */)reducePrivacyProtectionsActionHandler;
- (void)setDismissButtonHandler:(id /* block */)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReducePrivacyProtectionsActionHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;
- (id)titleLabel;

@end
