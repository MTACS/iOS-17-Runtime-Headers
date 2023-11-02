
@interface HKOnboardingCompactDatePickerView : UIView {
    UIDatePicker * _datePicker;
    <HKOnboardingCompactDatePickerViewDelegate> * _delegate;
    UILabel * _initialTextLabel;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic) <HKOnboardingCompactDatePickerViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *initialTextLabel;

- (void).cxx_destruct;
- (void)_datePickerDidBeginEditing:(id)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (void)_setInitialLabelBGColor;
- (void)_setUpDatePicker:(id)arg1 maxYears:(long long)arg2;
- (void)_setUpInitialLabel:(id)arg1;
- (void)_showDatePicker;
- (id)axidForElementWithString:(id)arg1;
- (id)datePicker;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialText:(id)arg2 defaultDate:(id)arg3 maxYears:(long long)arg4;
- (id)initialTextLabel;
- (void)setBackgroundColor:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialText:(id)arg1 alignment:(long long)arg2;
- (void)setInitialTextLabel:(id)arg1;

@end
