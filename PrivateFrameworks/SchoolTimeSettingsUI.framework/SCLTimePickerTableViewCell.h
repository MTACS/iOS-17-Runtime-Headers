
@interface SCLTimePickerTableViewCell : UITableViewCell {
    NSDateInterval * _constraintInterval;
    unsigned long long  _constraintMode;
    NSDateFormatter * _dateFormatter;
    UIDatePicker * _datePicker;
    <SCLTimePickerTableViewCellDelegate> * _delegate;
    NSDateIntervalFormatter * _intervalFormatter;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, copy) NSDateInterval *constraintInterval;
@property (readonly) UIDatePicker *datePicker;
@property (nonatomic) <SCLTimePickerTableViewCellDelegate> *delegate;
@property (nonatomic, copy) NSDate *selectedDate;

- (void).cxx_destruct;
- (void)_updateConstraintModeWithInterval:(id)arg1 selectedDate:(id)arg2;
- (id)calendar;
- (id)constraintInterval;
- (id)datePicker;
- (void)datePickerDidChangeDate:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)selectedDate;
- (void)setCalendar:(id)arg1;
- (void)setConstraintInterval:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDate:(id)arg1;

@end
