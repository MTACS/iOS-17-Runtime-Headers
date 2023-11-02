
@interface CNGeminiPickerCell : CNLabeledCell {
    UILabel * _labelLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)labelLabel;
- (id)labelView;
- (void)setText:(id)arg1 detailText:(id)arg2;
- (void)tintColorDidChange;
- (id)valueLabel;
- (id)valueView;

@end
