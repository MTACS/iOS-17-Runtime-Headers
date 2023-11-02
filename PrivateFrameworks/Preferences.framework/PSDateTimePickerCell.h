
@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker * _datePicker;
    UILabel * _titleLabel;
}

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)datePicker;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)timeZoneChanged:(id)arg1;

@end
