
@interface ASVBlurredBackgroundView : UIVisualEffectView {
    long long  _backgroundStyle;
    long long  _controlStyle;
    bool  _enabled;
    bool  _highlighted;
    bool  _selected;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long controlStyle;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isSelected, nonatomic) bool selected;

+ (id)disabledEffectsForARStyle;
+ (id)disabledEffectsForStudioStyle;
+ (id)disabledSelectedEffects;
+ (id)highlightedEffectsForARStyle;
+ (id)highlightedEffectsForStudioStyle;
+ (id)normalEffectsForARDarkStyle;
+ (id)normalEffectsForARStyle;
+ (id)normalEffectsForDarkModeStyle;
+ (id)normalEffectsForStudioStyle;
+ (id)selectedEffects;
+ (id)selectedEffectsForARDarkStyle;
+ (id)selectedEffectsForDarkModeStyle;

- (long long)backgroundStyle;
- (long long)controlStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundStyle:(long long)arg2 controlStyle:(long long)arg3;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateBackgroundEffects;

@end
