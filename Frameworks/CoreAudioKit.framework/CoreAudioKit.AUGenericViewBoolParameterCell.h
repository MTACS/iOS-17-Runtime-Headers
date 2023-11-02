
@interface CoreAudioKit.AUGenericViewBoolParameterCell : CoreAudioKit.AUGenericViewParameterCellBase {
    void valueSwitch;
}

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) UISwitch *valueSwitch;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)initWithCoder:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValueSwitch:(id)arg1;
- (void)switchValueChangedWithSender:(id)arg1;
- (id)tintColor;
- (id)valueSwitch;

@end
