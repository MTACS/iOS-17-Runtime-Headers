
@interface GameCenterUI.ProfileAvatarView : GameCenterUI.AvatarView {
    void isEditable;
    void profileEditButtonBackground;
    void profileEditLabel;
    void roundedEditButton;
    void tapGestureRecognizer;
    void tapHandler;
}

@property (nonatomic, readonly) bool accessibilityIsEditable;
@property (nonatomic, readonly) UIVisualEffectView *accessibilityProfileEditButtonBackground;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityProfileEditLabel;
@property (nonatomic, readonly) UIView *accessibilityRoundedEditButton;

- (void).cxx_destruct;
- (bool)accessibilityIsEditable;
- (id)accessibilityProfileEditButtonBackground;
- (id)accessibilityProfileEditLabel;
- (id)accessibilityRoundedEditButton;
- (void)didTap;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
