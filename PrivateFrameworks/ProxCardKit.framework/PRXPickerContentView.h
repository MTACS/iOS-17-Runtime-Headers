
@interface PRXPickerContentView : PRXCardContentView {
    NSLayoutConstraint * _pickerTopConstraint;
    UIPickerView * _pickerView;
    UITextField * _textField;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (id)initWithCardStyle:(long long)arg1;
- (id)pickerView;
- (void)setTextField:(id)arg1;
- (id)textField;
- (void)updateConstraints;

@end
