
@interface SFAutomaticPasswordExplanationView : UIView <SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate, _UIScrollViewLayoutObserver> {
    UILayoutGuide * _contentLayoutGuide;
    NSLayoutConstraint * _contentLayoutGuideBottomConstraint;
    UILabel * _explanationLabel;
    NSLayoutConstraint * _iPadWidthConstraint;
    bool  _isPad;
    long long  _keyboardAppearance;
    long long  _keyboardType;
    NSLayoutConstraint * _narrowContentLeadingConstraint;
    NSLayoutConstraint * _narrowContentTrailingConstraint;
    NSArray * _narrowShadowImageViewConstraints;
    UILabel * _passwordRetrievalExpalantionLabel;
    bool  _requiresWideAppearance;
    UIScrollView * _scrollView;
    bool  _scrollViewNeedsShadowCachedValue;
    UILayoutGuide * _scrollableContentCenterLayoutGuide;
    SFAutomaticPasswordScrollViewContentView * _scrollableContentView;
    UIImageView * _shadowImageView;
    NSLayoutConstraint * _strongPasswordButtonHeightConstraint;
    NSLayoutConstraint * _strongPasswordButtonWidthConstraint;
    NSLayoutConstraint * _useCustomPasswordBaselineToBottomConstraint;
    NSLayoutConstraint * _useCustomPasswordButtonWidthConstraint;
    UIButton * _useOtherPasswordButton;
    UIButton * _useStrongPasswordButton;
    NSLayoutConstraint * _wideContentLeadingConstraint;
    double  _wideContentMaximumPadding;
    NSLayoutConstraint * _wideContentTrailingConstraint;
    NSArray * _wideShadowImageViewConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *explanationLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic, readonly) UILabel *passwordRetrievalExpalantionLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIButton *useOtherPasswordButton;
@property (nonatomic, readonly) UIButton *useStrongPasswordButton;

- (void).cxx_destruct;
- (void)_createLayoutConstraints;
- (void)_createSubviews;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (bool)_scrollViewNeedsShadow:(bool)arg1;
- (void)_updateContentLayoutGuideBottomConstraint;
- (void)_updateMaximumPadding;
- (void)_updateShadowViewAlpha;
- (void)_updateStrongPasswordHeightConstraint;
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;
- (void)_updateWideAppearanceRequirement;
- (void)automaticPasswordScrollContentViewDidLayout:(id)arg1;
- (id)explanationLabel;
- (id)initWithKeyboardType:(long long)arg1;
- (long long)keyboardAppearance;
- (void)layoutSubviews;
- (id)passwordRetrievalExpalantionLabel;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (id)useOtherPasswordButton;
- (id)useStrongPasswordButton;

@end