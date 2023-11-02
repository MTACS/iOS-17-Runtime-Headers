
@interface HealthExperienceUI.CompactDatePickerTableViewCell : UITableViewCell <HKOnboardingCompactDatePickerViewDelegate> {
    void $__lazy_storage_$_compactPicker;
    void $__lazy_storage_$_containerView;
    void $__lazy_storage_$_titleLabel;
    void item;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)compactDatePickerView:(id)arg1 didChangeValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
