
@interface GameCenterUI.SmallPlayerCardView : UIView {
    void avatarView;
    void button;
    void buttonActionBlock;
    void closeButton;
    void closeButtonActionBlock;
    void contentView;
    void contentViewBackground;
    void currentImageFetch;
    void disabled;
    void image;
    void shouldAnimateOnCloseButtonPress;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, readonly) UIButton *accessibilityCloseButton;
@property (nonatomic, readonly) UIButton *accessibilityInviteButton;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)accessibilityCloseButton;
- (id)accessibilityInviteButton;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (void)didTapButton;
- (void)didTapCloseButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
