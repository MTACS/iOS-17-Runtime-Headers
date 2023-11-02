
@interface _UIKeyShortcutHUDCell : UICollectionViewListCell {
    bool  _categoryVisible;
    bool  _drawsBackground;
    bool  _flashing;
}

@property (getter=isBackgroundVisible, nonatomic, readonly) bool backgroundVisible;
@property (getter=isCategoryVisible, nonatomic) bool categoryVisible;
@property (nonatomic) bool drawsBackground;
@property (getter=isFlashing, nonatomic) bool flashing;

- (long long)_backgroundStyleForState:(id)arg1;
- (id)_defaultFocusEffect;
- (long long)_focusItemDeferralMode;
- (bool)_shouldSkipKeyCommand:(id)arg1 forMovement:(long long)arg2;
- (bool)canBecomeFocused;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (bool)drawsBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundVisible;
- (bool)isCategoryVisible;
- (bool)isFlashing;
- (void)prepareForReuse;
- (void)setCategoryVisible:(bool)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setFlashing:(bool)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
