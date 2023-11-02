
@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell {
    UISwitch * _valueSwitch;
}

@property (nonatomic, retain) UISwitch *valueSwitch;

+ (long long)_layoutAxis;

- (void).cxx_destruct;
- (void)_prototypingSettingDidChange;
- (void)_switchDidChangeValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setValueSwitch:(id)arg1;
- (id)valueSwitch;

@end
