
@interface WFTimePickerTableViewCell : UITableViewCell {
    UIDatePicker * _datePicker;
}

@property (nonatomic, readonly) UIDatePicker *datePicker;

- (void).cxx_destruct;
- (id)datePicker;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end
