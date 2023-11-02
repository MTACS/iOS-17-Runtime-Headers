
@interface CKConversationListAccessoryView : UIControl {
    UIVisualEffectView * _backgroundView;
    UIView * _colorView;
    NSDictionary * _configStateMap;
    bool  _imageNeedsEdgeAntiAliasing;
    UIImageView * _imageView;
    NSNumber * _lastKnownState;
    bool  _needsVibrancy;
    bool  _needsVisualEffects;
    UIVisualEffectView * _vibrancyView;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic, retain) NSDictionary *configStateMap;
@property (nonatomic) bool imageNeedsEdgeAntiAliasing;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSNumber *lastKnownState;
@property (nonatomic) bool needsVibrancy;
@property (nonatomic) bool needsVisualEffects;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) UIVisualEffectView *vibrancyView;

+ (double)defaultDiameter;
+ (id)defaultStateConfigMap;

- (void).cxx_destruct;
- (void)_setConfig:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setNeedsVisualAppearanceUpdate;
- (void)_updateVisualAppearanceForCurrentStateIfNeeded;
- (id)backgroundView;
- (id)colorView;
- (id)configForState:(unsigned long long)arg1;
- (id)configStateMap;
- (bool)imageNeedsEdgeAntiAliasing;
- (id)imageView;
- (id)init;
- (id)initWithDiameter:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastKnownState;
- (void)layoutSubviews;
- (bool)needsVibrancy;
- (bool)needsVisualEffects;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredSymbolConfiguration;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setBlurEffect:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBlurEffect:(id)arg1 withVibrancyEffectStyle:(long long)arg2 forState:(unsigned long long)arg3;
- (void)setColorView:(id)arg1;
- (void)setConfigStateMap:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageNeedsEdgeAntiAliasing:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setLastKnownState:(id)arg1;
- (void)setNeedsVibrancy:(bool)arg1;
- (void)setNeedsVisualEffects:(bool)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setVibrancyEffectStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setVibrancyView:(id)arg1;
- (id)vibrancyView;

@end
