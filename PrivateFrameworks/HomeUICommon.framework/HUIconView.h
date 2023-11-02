
@interface HUIconView : UIView <HUIconContentViewDelegate> {
    long long  _contentMode;
    HUIconContentView * _currentIconContentView;
    bool  _disableContinuousAnimation;
    unsigned long long  _displayContext;
    unsigned long long  _displayStyle;
    UIVisualEffectView * _effectView;
    unsigned long long  _iconSize;
    bool  _useIntrinsicContentSizeFromAsset;
    UIVisualEffect * _vibrancyEffect;
    double  _vibrancyEffectAnimationDuration;
}

@property (nonatomic) long long contentMode;
@property (nonatomic, retain) HUIconContentView *currentIconContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableContinuousAnimation;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) unsigned long long iconSize;
@property (readonly) Class superclass;
@property bool useIntrinsicContentSizeFromAsset;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;
@property (nonatomic) double vibrancyEffectAnimationDuration;

- (void).cxx_destruct;
- (id)_defaultVibrancyEffect;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(bool)arg1;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(bool)arg1 animated:(bool)arg2;
- (id)contentContainerView;
- (long long)contentMode;
- (id)currentIconContentView;
- (bool)disableContinuousAnimation;
- (unsigned long long)displayContext;
- (unsigned long long)displayStyle;
- (id)effectView;
- (void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2;
- (id)iconDescriptor;
- (unsigned long long)iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentMode:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)reclaimIconIfPossible;
- (void)renounceIconIfPossible;
- (void)setContentMode:(long long)arg1;
- (void)setCurrentIconContentView:(id)arg1;
- (void)setDisableContinuousAnimation:(bool)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (void)setEffectView:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setUseIntrinsicContentSizeFromAsset:(bool)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (void)setVibrancyEffect:(id)arg1 animated:(bool)arg2;
- (void)setVibrancyEffectAnimationDuration:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)useIntrinsicContentSizeFromAsset;
- (id)vibrancyEffect;
- (double)vibrancyEffectAnimationDuration;

@end
