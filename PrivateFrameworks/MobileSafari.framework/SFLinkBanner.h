
@interface SFLinkBanner : SFPinnableBanner {
    SFThemeColorEffectView * _backdrop;
    NSLayoutConstraint * _backdropTopConstraint;
    double  _backdropTopExtension;
    UIButton * _dismissButton;
    id /* block */  _dismissButtonHandler;
    UIImageView * _icon;
    NSLayoutConstraint * _iconLeadingConstraintToSuperview;
    NSLayoutConstraint * _messageBottomConstraint;
    UILabel * _messageLabel;
    NSLayoutConstraint * _messageTopConstraint;
    id /* block */  _openActionHandler;
    _SFDimmingButton * _openButton;
    bool  _shouldHideIcon;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLeadingConstraint;
    NSLayoutConstraint * _titleTopConstraint;
}

@property (nonatomic) double backdropTopExtension;
@property (nonatomic, copy) id /* block */ dismissButtonHandler;
@property (nonatomic, retain) UIImageView *icon;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) NSString *messageLabelText;
@property (nonatomic, copy) id /* block */ openActionHandler;
@property (nonatomic, retain) _SFDimmingButton *openButton;
@property (nonatomic, readonly) UIColor *preferredButtonBackgroundColor;
@property (nonatomic, readonly) UIColor *preferredButtonTintColor;
@property (nonatomic) bool shouldHideIcon;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)iconHeight;

- (void).cxx_destruct;
- (void)_dismiss;
- (id)_messageLabelFont;
- (void)_open;
- (void)_setShowsDismissButton:(bool)arg1;
- (id)_titleLabelFont;
- (double)backdropTopExtension;
- (void)contentSizeCategoryDidChange;
- (id /* block */)dismissButtonHandler;
- (id)icon;
- (id)init;
- (void)invalidateBannerLayout;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)messageLabelText;
- (id /* block */)openActionHandler;
- (id)openButton;
- (id)preferredButtonBackgroundColor;
- (id)preferredButtonTintColor;
- (void)setBackdropTopExtension:(double)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDismissButtonHandler:(id /* block */)arg1;
- (void)setIcon:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageLabelText:(id)arg1;
- (void)setOpenActionHandler:(id /* block */)arg1;
- (void)setOpenButton:(id)arg1;
- (void)setShouldHideIcon:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldHideIcon;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;
- (id)titleLabel;

@end
