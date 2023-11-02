
@interface HUIconButton : UIControl {
    UIVisualEffectView * _backgroundEffectView;
    HUIconView * _iconView;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) HUIconView *iconView;

- (void).cxx_destruct;
- (id)backgroundEffectView;
- (long long)contentMode;
- (id)iconDescriptor;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setBackgroundVisualEffect:(id)arg1 animated:(bool)arg2;
- (void)setBackgroundVisualEffectViewCornerRaduis:(double)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setIconTintColor:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setVibrancyEffect:(id)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)arg1 animated:(bool)arg2;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (id)vibrancyEffect;

@end
