
@interface HUCameraBadgeView : UIView {
    UIVisualEffectView * _blurEffectView;
    HULegibilityLabel * _label;
    NSArray * _labelConstraints;
    _UILegibilitySettings * _legibilitySettings;
    unsigned long long  _size;
    NSArray * _staticConstraints;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (nonatomic, readonly) UIVisualEffectView *blurEffectView;
@property (nonatomic, readonly) HULegibilityLabel *label;
@property (nonatomic, retain) NSArray *labelConstraints;
@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (nonatomic, readonly) UIVisualEffectView *vibrancyEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)blurEffectView;
- (id)initWithSize:(unsigned long long)arg1;
- (id)label;
- (id)labelConstraints;
- (id)labelText;
- (id)legibilitySettings;
- (void)setLabelConstraints:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (unsigned long long)size;
- (id)staticConstraints;
- (void)updateConstraints;
- (id)vibrancyEffectView;

@end
