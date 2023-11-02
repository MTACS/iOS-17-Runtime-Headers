
@interface RemindersUICore.TTRITextField : UITextField {
    void ttriAccessibilityLabeledWithPlaceholder;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;

- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;

@end
