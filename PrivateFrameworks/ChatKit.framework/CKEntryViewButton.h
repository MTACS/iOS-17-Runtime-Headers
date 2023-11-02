
@interface CKEntryViewButton : UIView <UIPointerInteractionDelegate> {
    CKEntryViewBlurrableButtonContainer * _blurrableButtonContainer;
    UIButton * _button;
    BOOL  _ckTintColor;
    long long  _entryViewButtonType;
    bool  _needsOversizedBlurContainer;
    UIVisualEffectView * _vibrancyView;
    bool  _wantsVibrancy;
}

@property (nonatomic) double blurRadius;
@property (nonatomic, retain) CKEntryViewBlurrableButtonContainer *blurrableButtonContainer;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic) BOOL ckTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, setter=setEnabled:, nonatomic) bool enabled;
@property (nonatomic) long long entryViewButtonType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsOversizedBlurContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIVisualEffectView *vibrancyView;
@property (nonatomic) bool wantsVibrancy;

+ (id)entryViewButtonImageForType:(long long)arg1;
+ (id)entryViewButtonImageForType:(long long)arg1 color:(BOOL)arg2;
+ (id)entryViewButtonImageWithName:(id)arg1 tintColor:(BOOL)arg2 shouldSuppressHairline:(bool)arg3;
+ (id)entryViewButtonOfType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1 wantsVibrancy:(bool)arg2;
+ (id)imageNameForEntryViewButtonType:(long long)arg1;
+ (id)overlayImageForImageNamed:(id)arg1 tintColor:(BOOL)arg2;
+ (void)prewarmEntryViewButtons;

- (void).cxx_destruct;
- (double)blurRadius;
- (id)blurrableButtonContainer;
- (id)button;
- (BOOL)ckTintColor;
- (void)configureForAnimatableBlur;
- (long long)entryViewButtonType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wantsVibrancy:(bool)arg2;
- (bool)isEnabled;
- (void)layoutSubviews;
- (bool)needsOversizedBlurContainer;
- (id)pointerInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)setBlurRadius:(double)arg1;
- (void)setBlurrableButtonContainer:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCkTintColor:(BOOL)arg1;
- (void)setDefaultImage;
- (void)setEnabled:(bool)arg1;
- (void)setEntryViewButtonType:(long long)arg1;
- (void)setNeedsOversizedBlurContainer:(bool)arg1;
- (void)setTintedImageForButtonType:(long long)arg1 tintColor:(BOOL)arg2;
- (void)setVibrancyView:(id)arg1;
- (void)setWantsVibrancy:(bool)arg1;
- (void)setupCompositeFilterForButton;
- (void)traitCollectionDidChange:(id)arg1;
- (id)vibrancyView;
- (bool)wantsVibrancy;

@end
