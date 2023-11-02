
@interface GameCenterUI.AchievementCard : UIView {
    void $__lazy_storage_$_focusBackgroundView;
    void $__lazy_storage_$_highlightView;
    void allowsFocusing;
    void alwaysShowShadow;
    void backgroundEffectsGroup;
    void backgroundView;
    void badge;
    void border;
    void gradient;
    void isHighlighted;
    void metrics;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void showsFocusedBackground;
    void style;
    void subtitleLabel;
    void tapGestureRecognizer;
    void tapHandler;
    void theme;
    void titleLabel;
    void wantsFixedContentSizeCategory;
}

@property (nonatomic, readonly) NSDate *accessibilityAchievementCompletedDate;
@property (nonatomic, readonly) _TtC12GameCenterUI16AchievementBadge *accessibilityBadge;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)accessibilityAchievementCompletedDate;
- (id)accessibilityBadge;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (bool)canBecomeFocused;
- (void)didTap;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
