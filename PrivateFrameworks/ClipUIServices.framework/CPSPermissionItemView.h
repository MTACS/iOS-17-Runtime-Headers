
@interface CPSPermissionItemView : UIStackView {
    bool  _blurEffectNeedsUpdate;
    bool  _hasBlurEffect;
    UISwitch * _permissionSwitch;
    UIView * _switchWithLabelBackgroundView;
    UIVisualEffectView * _switchWithLabelVisualEffectView;
}

@property (nonatomic) bool hasBlurEffect;
@property (getter=isOn, nonatomic) bool on;

- (void).cxx_destruct;
- (bool)hasBlurEffect;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 label:(id)arg2 description:(id)arg3;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setHasBlurEffect:(bool)arg1;
- (void)setOn:(bool)arg1;
- (void)setUpSwitchWithLabel:(id)arg1;

@end
