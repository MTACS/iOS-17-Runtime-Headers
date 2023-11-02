
@interface VUIVisualEffectLabel : UIView <VUILabelBaselineProtocol> {
    long long  _blurEffectStyle;
    bool  _disableClippingOnTallScripts;
    VUILabel * _label;
    unsigned long long  _visualEffectLabelType;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) long long blurEffectStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableClippingOnTallScripts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILabel *label;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visualEffectLabelType;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;
@property (nonatomic, readonly) double vuiBaselineHeight;

+ (long long)_backdropStyleForVisualEffectType:(unsigned long long)arg1 traitCollection:(id)arg2;
+ (id)labelWithType:(unsigned long long)arg1 label:(id)arg2 traitCollection:(id)arg3 existingVisualEffectLabel:(id)arg4;

- (void).cxx_destruct;
- (void)_configureVisualEffectForTraitCollection;
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;
- (long long)blurEffectStyle;
- (bool)disableClippingOnTallScripts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setDisableClippingOnTallScripts:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setVisualEffectLabelType:(unsigned long long)arg1;
- (void)setVisualEffectView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (unsigned long long)visualEffectLabelType;
- (id)visualEffectView;
- (double)vuiBaselineHeight;
- (double)vui_baselineOffsetFromBottom;

@end
