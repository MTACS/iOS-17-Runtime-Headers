
@interface EKDateTimeCell : UITableViewCell <_UIDatePickerCompactStyleDelegate> {
    NSArray * _currentConstraints;
    long long  _currentVisibleComponent;
    UIDatePicker * _datePicker;
    <EKDateTimeCellDelegate> * _dateTimeDelegate;
    UITapGestureRecognizer * _gestureRecognizer;
    bool  _isEditing;
    UILabel * _titleLabel;
}

@property (nonatomic) <EKDateTimeCellDelegate> *dateTimeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_datePicker:(id)arg1 didSelectComponent:(long long)arg2;
- (void)_updateConstraints;
- (void)contentSizeCategoryChanged;
- (void)datePickerBeganEditing:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)datePickerEndedEditing:(id)arg1;
- (id)dateTimeDelegate;
- (void)didMoveToWindow;
- (void)handleTap;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)replaceControlsWithPicker:(id)arg1;
- (void)resetDatePickerSelection;
- (void)setDateTimeDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateWithDate:(id)arg1 timeZone:(id)arg2 allDay:(bool)arg3 needsStrikethrough:(bool)arg4;
- (void)willMoveToSuperview:(id)arg1;

@end
