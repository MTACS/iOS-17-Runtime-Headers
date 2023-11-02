
@interface GameCenterUI.AchievementBadge : UIView {
    void $__lazy_storage_$_numberFormatter;
    void $__lazy_storage_$_progressNumberFont;
    void $__lazy_storage_$_progressPercentageFont;
    void iconImageView;
    void image;
    void innerFoil;
    void innerShadow;
    void metrics;
    void outerFoilLabel;
    void outerFoilRing;
    void progressBarLayer;
    void progressLabel;
    void status;
    void style;
    void theme;
}

@property (nonatomic, readonly) bool accessibilityIsAchievementCompleted;
@property (nonatomic, readonly) bool accessibilityIsAchievementInProgress;
@property (nonatomic, readonly) bool accessibilityIsAchievementLocked;
@property (nonatomic, readonly) double accessibilityProgress;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)accessibilityIsAchievementCompleted;
- (bool)accessibilityIsAchievementInProgress;
- (bool)accessibilityIsAchievementLocked;
- (double)accessibilityProgress;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
